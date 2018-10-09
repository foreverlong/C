/*************************************************************************
	> File Name: main.c
	> Author: foreverlong
	> Mail: admin@foreverlong.cn
	> Created Time: 2018年10月05日 星期五 21时25分52秒
 ************************************************************************/

#include<stdio.h>
void change(int *a,int *b)
{
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

int main()
{
    int a=5;
    int b=3;
    change(&a,&b);
    printf("num a=%d\nnum b=%d\n",a,b);
}
