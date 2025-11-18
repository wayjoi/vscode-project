/*
R6-14 统计大于等于平均分人数
分数 5
作者 王跃萍
单位 东北石油大学
函数 fun 的功能是：从m个学生的成绩中统计出高于和等于平均分的学生人数， 此人数由函数值返回。平均分通过形参传回，输入学生成绩时， 用-1结束输入，由程序自动统计学生人数。

函数接口定义：
int fun ( float *s, int n, float *aver );
其中 s、n、aver 都是用户传入的参数。n 值是学生人数。函数的功能是：从指针s所指向的数组中统计出大于等于平均分的学生人数， 此人数由函数值返回。平均分通过形参aver传回。
*/
#include <stdio.h>
int fun ( float *s, int n, float *aver );
int main()
{ float a,s[30],aver;
int m = 0,i;
scanf("%f",&a );
while( a>0 ) { s[m] = a; m++; scanf ( "%f", &a );}
printf( "The number of students : %d\n" , fun ( s, m, &aver ));
printf( "ave=%.2f\n",aver );
return 0;
}


/* 请在这里填写答案 */
int fun ( float *s, int n, float *aver )
{
    
    for(int i=0;i<n;i++)
    {
        *aver+=s[i];
    }
    *aver/=n;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]>=*aver)
        {
            count++;
        }
    }
    return count;
}