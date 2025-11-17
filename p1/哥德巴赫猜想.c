
/*数学领域著名的“哥德巴赫猜想”的大致意思是：任何一个大于2的偶数总能表示为两个素数之和。比如：24=5+19，其中5和19都是素数。本实验的任务是设计一个程序，验证5000以内的偶数都可以分解成两个素数之和。

输入格式:
输入在一行中给出一个(2, 5000]范围内的偶数N。

输出格式:
在一行中按照格式“N = p + q”输出N的素数分解，其中p \le≤ q均为素数。又因为这样的分解不唯一（例如24还可以分解为7+17），要求必须输出所有解中p最小的解。*/#include <stdio.h>
#include <string.h>

#define MAX 5000

int isPrime[MAX + 1];   // 1 表示素数

void sieve(void)
{
    memset(isPrime, 1, sizeof(isPrime));
    isPrime[0] = isPrime[1] = 0;
    for (int i = 2; i * i <= MAX; ++i)
        if (isPrime[i])
            for (int j = i * i; j <= MAX; j += i)
                isPrime[j] = 0;
}

int main(void)
{
    sieve();
    int N;
    scanf("%d", &N);
    for (int p = 2; p <= N / 2; ++p)
        if (isPrime[p] && isPrime[N - p]) {
            printf("%d = %d + %d\n", N, p, N - p);
            break;                  // 保证 p 最小
        }
    return 0;
}