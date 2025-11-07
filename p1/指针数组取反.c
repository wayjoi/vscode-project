#include<stdio.h>
int main()
{

    return 0;
}

void inv(int x[],int n)
{
    int temp,i,j,m=(n-1)/2;
    for(int i=0;i<=m;i++)
    {
        j=n-1-i;
        temp=x[i];x[i]=x[j];x[j]=temp;
    }
    return;
}