/*************************************************************************
	> File Name: 四则运算.c
	> Author: foreverlong
	> Mail: admin@foreverlong.cn
	> Created Time: 2018年09月20日 星期四 09时56分08秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    double a,b,c;
    char ch;
    scanf("%lf%c%lf",&a,&ch,&b);

    switch(ch)
    {
        case '+' : c=a+b; break;
        case '-' : c=a-b; break;
        case '*' : c=a*b; break;
        case '/' : c=a/b; break;
    }
    printf("%lf",c);
}
