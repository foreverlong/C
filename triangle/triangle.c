/*************************************************************************
	> File Name: triangle.c
	> Author: foreverlong
	> Mail: admin@foreverlong.cn
	> Created Time: 2018年09月27日 星期四 08时35分17秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    double p;
    double s;
    scanf("%lf%lf%lf",&a,&b,&c);
    if((a+b)>c&&(b+c)>a&&(a+c)>b)
    {
        p=(a+b+c)/2;
        s=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("%.2f",s);
    }
    else printf("no!!!!!!!");
    return 0;
}
