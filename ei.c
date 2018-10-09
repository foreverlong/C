/*************************************************************************
	> File Name: ei.c
	> Author: foreverlong
	> Mail: admin@foreverlong.cn
	> Created Time: 2018年09月25日 星期二 10时41分10秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    double x,y;
    scanf("%lf",&x);
    if (x<0) y=0;
    else if(x>=0&&x<=15) y=(4*x)/3;
    else y=2.5*x-10.5;
    printf("%.3lf",y);
}
