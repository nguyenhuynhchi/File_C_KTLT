#include <stdio.h>
#include <stdlib.h>

void ghitaptin(char *a,int n);
void doctaptin(char *a);
void copytaptin(char *a,char *a1,int m );
void merge(char* f0, char* f1, char* f2, int m);

int main()
{
    char a[]="D:\\f0"; /* tên t?p tin f0*/
    char a1[]="D:\\f1"; /* tên t?p tin f1*/
    char a2[]="D:\\f2"; /* tên t?p tin f2*/

    int n,m;

    printf("Nhap vao n:");
    scanf("%d",&n);

    ghitaptin(a,n);
    printf("\nFILE a: ");
    doctaptin(a);

    printf("\nNhap phan tu can sao chep:");
    scanf("%d",&m);

    printf("\nFILE a1: ");
    copytaptin(a,a1,m);
    doctaptin(a1);

    printf("\nPhan phoi luan phien: ");
    merge(a, a1, a2, n);

    printf("\nFILE a1: ");
    doctaptin(a1);

    printf("\nFILE a2: ");
    doctaptin(a2);
    
    printf("\nFILE a0: ");
    doctaptin(a);

    return 0;
}

void ghitaptin(char *a, int n)
{   
    FILE *fp;
    fp=fopen(a,"wb");
    int x;
    for(int i=1;i<=n;i++)
    {
        printf("\nVi tri %d: ",i);
        scanf("%d",&x);
        fwrite(&x,sizeof(int),1,fp);
    }
    fclose(fp); 
}

void doctaptin(char *a)
{   
    FILE *fp;
    fp=fopen(a,"rb");
    int x;
    fread(&x,sizeof(int),1,fp);
    while(!(feof(fp)))
    {
        printf("\t%d",x);
        fread(&x,sizeof(int),1,fp);
    }       
    fclose(fp); 
}

void copytaptin(char *a,char *a1,int m )
{
    FILE *fp;
    fp=fopen(a,"rb");
    FILE *fp1;
    fp1=fopen(a1,"wb");
    int x;
    int i=0;
    fread(&x,sizeof(int),1,fp);
    while(!(feof(fp)) && i<m)
    {
        fwrite(&x,sizeof(int),1,fp1);
        i++;
        fread(&x,sizeof(int),1,fp);         
    }
    fclose(fp); 
    fclose(fp1);    
}


void merge(char* f0, char* f1, char* f2, int m)
{
    FILE* fp0 = fopen(f0, "wb");
    FILE* fp1 = fopen(f1, "rb");
    FILE* fp2 = fopen(f2, "rb");

    int* buffer1 = (int*)malloc(m * sizeof(int));
    int* buffer2 = (int*)malloc(m * sizeof(int));

    int count1 = fread(buffer1, sizeof(int), m, fp1); /* d?c m ph?n t? t? t?p tin f1 vào buffer1 */
    int count2 = fread(buffer2, sizeof(int), m, fp2); /* d?c m ph?n t? t? t?p tin f2 vào buffer2 */

    while (count1 > 0 && count2 > 0) /* l?p d?n khi h?t d? li?u trong t?p tin f1 ho?c f2 */
    {
        int i = 0, j = 0;
        while (i < count1 && j < count2) /* l?p d?n khi m?t trong hai buffer du?c s? d?ng h?t */
        {
            if (buffer1[i] <= buffer2[j])
            {
                fwrite(&buffer1[i], sizeof(int), 1, fp0); /* ghi ph?n t? trong buffer1 vào t?p tin f0 */
                i++;
            }
            else
            {
                fwrite(&buffer2[j], sizeof(int), 1, fp0); /* ghi ph?n t? trong buffer2 vào t?p tin f0 */
                j++;
            }

            if (i >= count1) /* n?u buffer1 dã du?c s? d?ng h?t, d?c ti?p m ph?n t? t? t?p tin f1 */
            {
                count1 = fread(buffer1, sizeof(int), m, fp1);
                i = 0;
            }

            if (j >= count2) /* n?u buffer2 dã du?c s? d?ng h?t, d?c ti?p m ph?n t? t? t?p tin f2 */
            {
                count2 = fread(buffer2, sizeof(int), m, fp2);
                j = 0;
            }
        }
    }

    /* ghi d? li?u còn l?i t? buffer1 và buffer2 vào t?p tin f0 */
    while (count1 > 0)
    {
        fwrite(buffer1, sizeof(int), count1, fp0);
        count1 = fread(buffer1, sizeof(int), m, fp1);
    }

    while (count2 > 0)
    {
        fwrite(buffer2, sizeof(int), count2, fp0);
        count2 = fread(buffer2, sizeof(int), m, fp2);
    }

    fclose(fp0);
    fclose(fp1);
    fclose(fp2);

    free(buffer1);
    free(buffer2);
}

