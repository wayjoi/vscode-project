/* 此测试程序仅为示例，实际的测试程序可能不同，不要仅针对样例的输入和输出编写函数，而是要根据题意要求编写函数 */
#include <stdio.h>
double getScore(int *score, int total);
int main(){
    int score[5] = {92, 90, 99, 95, 98};   /* 仅为示例，实际的测试程序中，数组大小和元素数值都可能与样例不同 */
    printf("%.2f\n", getScore(score, 5) );  /* getScore( )函数只负责返回分值，由main函数中的代码负责按照2位小数打印输出 */
    return 0;
}
/* 你所编写的函数代码将被嵌在这里，注意：不要提交你编写的用于测试的main( )函数，否则无法通过编译 */
double getScore(int *score, int total)
{
    int max=score[0],min=score[0], sum=0;
    for(int i=0;i<total;i++)
    {
        if(max<score[i])max=score[i];
        if(min>score[i])min=score[i];
        sum+=score[i];
    }
    double answer=(sum-max-min)/(double)(total-2);
    return answer;
}