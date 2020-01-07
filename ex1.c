#include <stdio.h>
int main()
{
    int a,b,c;
    printf("输入两个整数:\n");
    scanf("%d%d",&a,&b);
    c=(a+b)*(a+b);
    printf("两数和的平方为:%d\n",c);
    return 0;
}