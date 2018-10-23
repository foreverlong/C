/*************************************************************************
	> File Name: cos.c
	> Author:foreverlong
	> Mail:admin@foreverlong.cn
	> Created Time: 2018年10月18日 星期四 08时53分21秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
//double e,x;
//double cosx;
double jie(int shu);
double funcos(double e,double x);
int main()
{
    double cosx,e,x;
    scanf("%lf%lf",&e,&x);
    cosx=funcos(e,x);
    printf("%f",cosx);
}
double jie(int shu)
{
    int a=1,i=1;
    for (i=1;i<=shu;i++)
    {
        a=a*i;
    }
    return a;
}
double funcos(double e,double x)
{
    double cosx=0.0,item=1.0;
    double jie(int shu);
    int c;
    //double d;
    int i=2,f=1;
    for (i=0;i>-5;i=i+2)
    {
        //c=jiecheng(i);
        item=(f*pow(x,i))/jie(i);
        cosx=cosx+item;
        f=-f;
        if (fabs(item)<e)
        {
            break;
        }
    }
    return cosx;
}
/*
int main(void)
{
    double cosx;
    double e,x;
    scanf("%lf%lf",&e,&x);
    cosx=funcos(e,x);
    printf("%f",cosx);
}


*/
