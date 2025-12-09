#include<stdio.h>
int main()
{
    int a=3;
    {
        int b=5;
        int a=6;
        a++;
        printf("%d%d",a,b);
    }
    return 0;
}