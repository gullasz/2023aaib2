///大的a 中的b 小的c a%b)
#include <stdio.h>
int gcd(int a,int b)
{
    if (a==0) return b;
    if (b==0) return a;
    return gcd(b,a%b);///老二變老大，老三變老二
}

int main()
{
    printf("請輸入a b兩個數字:");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("最大公因數是:%d\n",gcd(a,b));
}
