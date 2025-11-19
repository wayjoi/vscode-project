#include<stdio.h>

int main()
{

    char *name[]={"follow me","BASIC",
        "great wall","FORTRAN","computer design"};//定义指针数组
    char **p;
    int i;
    for(i=0;i<5;i++)
    {
        p=name+i;
        printf("%s\n",*p);
    }
    return 0;
}