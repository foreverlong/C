/*************************************************************************
	> File Name: zhuanhuan.c
	> Author:foreverlong
	> Mail:admin@foreverlong.cn
	> Site:wwww.foreverlong.cn
	> Created Time: 2018年11月09日 星期五 16时13分13秒
 ************************************************************************/
#include<stdio.h>
int fang(int n)
{
    int r=1,i;
    for(i=1;i<=n;i++)
    {
        r=r*16;
    }
    return r;
}
int main()
{
    char c;
    int i=0,j=1,shijin=0,a[100],flag=1;
    while((c=getchar())!='#')
    {
        switch (c)
        {
            case '0':a[i]=0;break;
            case '1':a[i]=1;break;
            case '2':a[i]=2;break;
            case '3':a[i]=3;break;
            case '4':a[i]=4;break;
            case '5':a[i]=5;break;
            case '6':a[i]=6;break;
            case '7':a[i]=7;break;
            case '8':a[i]=8;break;
            case '9':a[i]=9;break;
            case 'a':a[i]=10;break;
            case 'b':a[i]=11;break;
            case 'c':a[i]=12;break;
            case 'd':a[i]=13;break;
            case 'e':a[i]=14;break;
            case 'f':a[i]=15;break;
            case 'A':a[i]=10;break;
            case 'B':a[i]=11;break;
            case 'C':a[i]=12;break;
            case 'D':a[i]=13;break;
            case 'E':a[i]=14;break;
            case 'F':a[i]=15;break;
            case '-':
                if(i==0) 
                {
                flag = -1;
                }
                i--;
                break;
            default: i--;break;
        }
        i++;
    }
    i=i-1;
    for(;i>=0;i--)
    {
        shijin=shijin+a[i]*fang(j-1);
        j++;
    }
    shijin=shijin*flag;
    printf("%d",shijin);
}
    /*while((c=getchar())!='#')
    {
        if(c=='0'||c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9'||c=='a'||c=='b'||c=='c'||c=='d'||c=='e'||c=='A'||c=='B'||c=='C'||c=='D'||c=='e')
        {
            a[i]=c;
            i++;
        }
    }
    a[i]='\n';
    i=i-1;
    for(;i>=0;i--)
    {
        shijin=fang(16,j)*(a[i]-)
        j++
    }*/
