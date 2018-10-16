/*************************************************************************
    > File Name: fangcheng.c
    > Author: foreverlong
    > Mail: admin@foreverlong.cn
    > Created Time: 2018年10月11日 星期四 08时40分01秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

void dayu(double a,double b,double c)
{
    double x1,x2;
    double p=sqrt(b*b-4*a*c);
    x1=(-b+p)/(2*a);
    x2=(-b-p)/(2*a);
    printf("x1=%lf\nx2=%lf",x1,x2);    
}

void dengyu(double a,double b,double c)
{
    double x1;
    x1=(-b+sqrt(b*b-4*a*c))/(2*a);
    printf("x1=x2=%lf",x1);
}

void xiaoyu(double a,double b,double c)
{
    double x1,x2;
    double zuo,you;
    zuo=-b/(2*a);
    you=sqrt(4*a*c-b*b)/(2*a);
    printf("x1=%lf+%lfi\nx2=%lf-%lfi\n",zuo,you,zuo,you);
}

int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    double d=b*b-4*a*c;
    if(d>0) 
    {
        dayu(a,b,c);
    }
    if(d==0)
    {
        dengyu(a,b,c);
    }
    if(d<0)
    {
        xiaoyu(a,b,c);
    }
}

