/*
R7-6 删除字符串中指定字母
分数 10
作者 齐心
单位 湖北汽车工业学院
请使用指针的方法编写程序，程序的功能是从键盘输入一个字符串(字符串长度小于100)，删除其中的字母a后输出。例如，输入字符串abcaca，输出bcc。

输入样例:
abcaca
输出样例:
bcc
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char *pstr=str;
    char result[100];
    char *presult=result;
    scanf("%s",str);
    while(*pstr!='\0')
    {
        if(*pstr!='a')
        {
            *presult=*pstr;
            presult++;
        }
        pstr++;
    }
    *presult='\0';
    printf("%s\n",result);
    return 0;
}