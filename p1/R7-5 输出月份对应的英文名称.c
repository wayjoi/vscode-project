#include<stdio.h>
int main()
{
    int repeat;
        char *months[]={"January", "February", "March",
        "April","May", "June", "July", "August",
        "September", "October", "November", "December"};
    scanf("%d",&repeat);
    while(repeat--)
    {
        int month;
        scanf("%d",&month);
        if(month>12||month<1)printf("Wrong input!");
        else printf("%s",*(months+month-1));
        printf("\n");
    }
    return 0;
}