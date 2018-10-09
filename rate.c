/*************************************************************************
	> File Name: rate.c
	> Author:foreverlong 
	> Mail: admin@foreverlong.cn
	> Created Time: 2018年09月18日 星期二 11时18分04秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int main(void)
{
    int qian,nian;
    double lilv;
    double sum;
    printf("输入钱，年，利率");
    scanf("%d%d%lf",&qian,&nian,&lilv);
    sum= qian * pow(1+lilv,nian);
    printf("%.2lf\n",sum);
}

