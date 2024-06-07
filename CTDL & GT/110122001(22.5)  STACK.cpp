#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
	char info;
	struct node *pNext;
};
typedef struct node NODE;
typedef struct stack
{
	NODE *top;
}STACK;
void khoitaostack(STACK &t);
int IsEmpty(STACK t);
void Push(STACK &t,char x);
char Pop(STACK &t);
int main()
{
	STACK t;
	khoitaostack(t);
	char x;
	char a[] = "EAS*Y**QUE***SI***I*ON";
	for(int i=0; i<strlen(a); i++)
	{
		if(a[i] == '*')
		{
			x = Pop(t);
			printf("%c",x);
		}
		else
		{
			x=a[i];
			Push(t,x);
		}
	}
	return 0;
}
void khoitaostack (STACK &t)
{
	t.top==NULL;
}

int IsEmpty(STACK t)
{
	return t.top == NULL ? 1:0;
}
void Push(STACK &t,char x)
{
	NODE *p;
	p=new NODE;
	if(p!=NULL)
	{
		p->info=x;
		p->pNext=t.top;
		t.top=p;
	}	
}
char Pop(STACK &t)
{
	char x;
	if(!IsEmpty(t))
	{
		NODE *p=t.top;
		x=p->info;
		t.top=p->pNext;
	}
	return x;
}
























