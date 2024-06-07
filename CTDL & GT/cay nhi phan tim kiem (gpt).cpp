#include <stdio.h>
#include <stdlib.h>

// dinh nghia cau truc cua mot n�t trong c�y nhi ph�n t�m kiem
struct Node
{
    int data;
    Node* pLeft;
    Node* pRight;
};

// H�m tao mot nut moi
Node* createNode(int data)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->pLeft = newNode->pRight = NULL;
    return newNode;
}

// Ham ch�n c�c n�t v�o c�y nhi ph�n t�m kiem
Node* insertNode(Node* root, int data)
{
    if (root == NULL) 
	{
        return createNode(data);
    }

    if (data < root->data) 
	{
        root->pLeft = insertNode(root->pLeft, data);
    }
    
    else if (data > root->data) 
	{
        root->pRight = insertNode(root->pRight, data);
    }

    return root;
}

// H�m xuat du lieu tu cay nhi phan tim kiem theo thu tu inorder
void inorderTraversal(Node* root)
{
    if (root != NULL) 
	{
        inorderTraversal(root->pLeft);
        printf("%d ", root->data);
        inorderTraversal(root->pRight);
    }
}

// Ham nhap du lieu cho c�y nhi phan tim kiem 
Node* inputTree(Node* root)
{
    int data;
    printf("Nhap gia tri node (nhap -1 de ket thuc): ");
    scanf("%d", &data);
    while (data != -1) 
	{
        root = insertNode(root, data);
        printf("Nhap gia tri node (nhap -1 de ket thuc): ");
        scanf("%d", &data);
    }
    return root;
}

// H�m xuat du lieu tu c�y nhi ph�n t�m kiem
void outputTree(Node* root)
{
    printf("Cay nhi phan tim kiem duyet theo thu tu inorder: ");
    inorderTraversal(root);
    printf("\n");
}

// H�m t�m mot node trong c�y nhi ph�n t�m kiem
Node* searchNode(Node* root, int key)
{
    if (root == NULL || root->data == key) {
        return root;
    }

    if (key < root->data) {
        return searchNode(root->pLeft, key);
    }

    return searchNode(root->pRight, key);
}

int main()
{
    Node* root = NULL;

    root = inputTree(root);
    outputTree(root);
    
    int key;
    printf("Nhap gia tri can tim kiem: ");
    scanf("%d", &key);
    Node* result = searchNode(root, key);
    
    if (result == NULL) 
	{
        printf("%d KHONG ton tai trong cay!", key);
    }
    
    else 
	{
        printf("%d CO ton tai trong cay!", key);
    }

    return 0;
}

