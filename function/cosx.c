/*************************************************************************
	> File Name: cosx.c
	> Author:foreverlong
	> Mail:admin@foreverlong.cn
	> Created Time: 2018年10月20日 星期六 19时56分21秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int jie(int shu)
{
    int i;
    double de=1;
    for(i=1;i<=shu;i++)
    {
        de=de*i;
    }
    return de;
}

/*

double funcos(double e,int x)
{
    double shu=0.0,cosx=0.0,xiang=1.0;
    int f=1;
    while (fabs(xiang)>=e)
    {
        xiang=(f*pow(x,shu))/jiecheng(shu);
        cosx=cosx+xiang;
        shu=shu+2;
        f=-f;
    }
    return cosx;
}
*/

double funcos(double e,int x)
{
int flag,a,i;
double sum,item;
double jie(int shu);
item=1; 
flag=1;
a=0;
i=0;
sum=0;
while(fabs(item)>=e){
item=(flag*pow(x,a))/jie(i);
sum=sum+item;
flag=-flag;
a=a+2;
i=i+2;
}
return sum;
}


int main()
{
    double e,x,cosx;
    scanf("%lf%lf",&e,&x);
    cosx=funcos(e,x);
    printf("%f",cosx);
}
