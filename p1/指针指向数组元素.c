#include<stdio.h>

int main()//指针变量在使用之前一定要有安全指向
{
    int i,a[10],*p=a;
    p=a;
    printf("please enter 10 integer numbers:");
    for(i=0;i<10;i++)
    {
        scanf("%d",p++);
    }
    p=a;//使用前使p重新指向a[0]
    for(i=0;i<10;i++,p++)
    {
        printf("%d ",*p);
    }
    printf("\n");

    return 0;
}