/*如果一串字符从左至右读和从右至左读相同，那么这串字符就是回文（Palindrome）。
例如，ABCBA是回文，而ABCD则不是。本题要求编写一个判断字符串是否为回文的函数，
并且通过函数参数获取字符串的中间字符（如果中间是两个字符，则获取靠左的那一个，
例如字符串是ABCDEF，则中间字符是C）。题目保证输入的字符串长度在1至2000之间且不含空格、换行等分隔符。

函数接口定义：
int isPalindrome(const char* str, char* pch);
其中 str 和 pch 都是用户传入的参数。 str 是字符串的首地址； 
pch 是传入的要存放字符串中间字符的变量的地址。如果字符串是回文，函数须返1，否则返回0。
*/

/* 测试程序仅为示例，实际的测试程序可能不同 */
#include <stdio.h>
#include <string.h>
#define MAXLENGTH 100
int isPalindrome(const char* str, char* pch);
int main(){
    char str[MAXLENGTH],mid;
    scanf("%s",str);
    if(isPalindrome(str, &mid))
        printf("是回文！中间字符是%c\n",mid);
    else
        printf("不是回文！中间字符是%c\n",mid);
    return 0;
}

/* 你编写的函数代码将被嵌在这里 */
int isPalindrome(const char* str, char* pch)
{
    int len = strlen(str);
    int mid = len / 2;

    // 判断是否为回文
    if(len==1)
    {
        *pch = str[0];
        return 1;
    }

    if (len % 2 == 1) {
        *pch = str[mid];  // 奇数长度
    } else {
        *pch = str[mid - 1];  // 偶数长度，取靠前的一个
    }

    for (int i = 0; i < mid; i++) {
        if (str[i] != str[len - 1 - i]) {
            return 0;
        }
    }

    // 是回文，返回中间字符
    

    return 1;
}


/*int isPalindrome(const char* str, char* pch)
{
    int len = strlen(str);
    if(len==1)
    {
        *pch = str[0];
        return 1;
    }
    int mid = len / 2;
    *pch = str[mid];//自写错误代码，判断回文部分遗漏
    for (int i = 0; i < mid; i++) {
        if (str[i] != str[len - 1 - i]) {
            return 0;
        }
    }
    return 1;
}
*/ 