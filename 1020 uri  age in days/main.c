#include<stdio.h>


int main(void)
{
    int x;
    scanf("%d",&x);
    printf("%d ano(s)\n",x / 365);
    if(x / 365 != 0)
    {
        x %= 365;
    }
    printf("%d mes(es)\n",x / 30);
    if(x / 30 != 0)
    {
        x %= 30;
    }
    printf("%d dia(s)\n",x);
    return 0;
}