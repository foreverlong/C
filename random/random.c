/*************************************************************************
	> File Name: random.c
	> Author: foreverlong
	> Mail: admin@foreverlong.cn
	> Created Time: 2018年09月25日 星期二 10时28分29秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define ran(x) (rand()%x)
int main()
{
    int a=ran(100);
    int b;
    int j=0;
    for(int i=0;i==0;)
    {
        scanf("%d",&b);
        if(b>a) printf("大了\n");
        if(b<a) printf("小了\n");
        if(b==a)  
        {
            printf("对了\n");
            i=1;
        }
        j++;
    }
    printf("你猜了%d次\n",j);
}
