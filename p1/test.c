#include<stdio.h>
int main()
{
    double sum=0,i,N;
    scanf("%lf",&N);
    for(i=0;i<N;i=i+1)
    {
        sum+=1/i;
        
    }
    printf("sum=%.4f",sum);
    return 0;
}