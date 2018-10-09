/*************************************************************************
	> File Name: t.c
	> Author: foreverlong
	> Mail: admin@foreverlong.cn
	> Created Time: 2018年10月09日 星期二 10时15分11秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int n;
    float s;
    s=1.0;
    for(n=10;n>1;n--)  s=s+1.0/n;
    printf("%6.4f\n",s);
    return 0;
}
