/*R6-6 删除字符串中数字字符
分数 5
作者 王跃萍
单位 东北石油大学
删除一个字符串中的所有数字字符。*/
#include "stdio.h"
void delnum(char *s);
int main ()
{ char item[80];
gets(item);
 delnum(item);
 printf("%s\n",item);
 return 0;
}

/* 请在这里填写答案 */
void delnum(char *s) {
    char *d = s;
    while (*s) {
        if (*s < '0' || *s > '9') {
            *d++ = *s;
        }
        s++;
    }
    *d = '\0';
}