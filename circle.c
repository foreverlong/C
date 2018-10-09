/*************************************************************************
	> File Name: circle.c
	> Author: foreverlong
	> Mail: admin@foreverlong.cn
	> Created Time: 2018年09月27日 星期四 08时41分19秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    double r,s,c;
    int k;
    printf("先r后k");
    scanf("%lf",&r);
    scanf("%d",&k);
    s=3.14*r*r;
    c=2*3.14*r;
    switch(k)
    {
        case 1 : printf("面积:%f\n",s); break;
        case 2 : printf("周长:%f\n",c); break;
        case 3 : printf("面积：%f\n 周长：%f\n",s,c);
    }
    return 0;
}
