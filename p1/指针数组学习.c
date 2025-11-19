//int *p[4];//指针数组
//int (*p)[4];//指向一位数组的指针变量
#include<stdio.h>
#include<string.h>//
int main()
{
    void sort(char *name[],int n);
    void print(char *name[],int n);
    char *name[]={"follow me","BASIC",
        "great wall","FORTRAN","computer design"};//定义指针数组
int n=5;
sort(name,n);
print(name,n);
return 0;
}
void sort(char *name[],int n)
{
    char *temp;
    int i,j,k;
    for(i=0;i<n-1;i++)//选择法排序
    {
        k=i;
        for(j=i+1;j<n;j++)
        {
            if(strcmp(name[k],name[j])>0)k=j;

        }
        if(k!=i)
        {
            temp=name[i];name[i]=name[k];name[k]=temp;
        }
    }
}
void print(char *name[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%s\n",name[i]);
    }
}
/*也可以写成
void print(char *name[],int n)
{
    int i=0;
    char *p;
    p=name[0];
    while(i<n)
    {
        p=*(name+i++);
        printf("%s\n,p");

    }
}
*/