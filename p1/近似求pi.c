#include <stdio.h>

int main(void)
{
    double eps, t = 1.0, sum = 1.0;
    int i = 1;
    scanf("%le", &eps);          // 读入精度
    while (t >= eps) {
        t *= (double)i / (2 * i + 1);
        sum += t;
        ++i;
    }
    printf("PI = %.5f\n", 2.0 * sum);
    return 0;
}