#include<stdio.h>
int main()
{
    int arr[10]={1,4,2,8,3,5,7,6,9,0},min=arr[0];
    for(int i=0;i<9;i++)
    {
        for(int ii=i;ii<10;ii++)
        {
            if(arr[ii]<arr[i])
            {
            min=arr[ii];
            arr[ii]=arr[i];
            arr[i]=min;
            }
        }

    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    

    return 0;
}