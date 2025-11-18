#include <stdio.h>
int fun(char *p1);
int main()
{
 char *p,a[20];
 int len;
 p=a;
 gets(p);
 len=fun(p);
 printf("The string's length is:%d\n",len);
 return 0;
 }

/* 请在这里填写答案 */
int fun(char *p1)
{
    return strlen(p1);
}