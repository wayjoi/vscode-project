/*
R7-3 逆置一维数组
分数 10
作者 usx程序设计类课程组
单位 绍兴文理学院
编写程序，以指针的方式，就地逆置一维数组。

输入格式:
首先输入一个正整数T，表示测试数据的组数，然后是T组测试数据。每组测试数据先输入数据个数n，然后输入n个整数。

输出格式:
对于每组测试，在一行上输出逆置之后的结果。数据之间以一个空格分隔。

输入样例:
2
4 1 2 5 3
5 4 3 5 1 2
输出样例:
3 5 2 1
2 1 5 3 4
*/
#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while (T--) {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        // 逆置数组
        for (int i = 0; i < n / 2; i++) {
            int temp = *(arr + i);
            *(arr + i) = *(arr + n - 1 - i);
            *(arr + n - 1 - i) = temp;
        }
        // 输出结果
        for (int i = 0; i < n; i++) {
            printf("%d", *(arr + i));
            if (i != n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}