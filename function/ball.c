/*************************************************************************
    > File Name: ball.c
    > Author: foreverlong
    > Mail: admin@foreverlong.cn
    > Created Time: 2018年10月11日 星期四 09时08分01秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int n,i;
    double h,l=0;
    scanf("%lf%d",&h,&n);
    if(n==1)
    {
        l=h;
        h=h/2;
    }
    else
    {
        l=h;
        for(i=2;i<=n;i++)
        {
            l=l+h;
            h=h/2;
        }
        h=h/2;
    }
    printf("%.1lf %.1lf",l,h);
}
