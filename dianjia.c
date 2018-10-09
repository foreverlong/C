/*************************************************************************
	> File Name: dianjia.c
	> Author: foreverlong
	> Mail: admin@foreverlong.cn
	> Created Time: 2018年09月20日 星期四 09时24分44秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    double use,money;
    scanf("%lf",&use);
    if(use<=50)
        {
            money = use*0.53;
         }
    else
        {
             money = 26.5+(use-50)*0.53;
          }
    printf("%.2f\n",money);
    return 0;
}
