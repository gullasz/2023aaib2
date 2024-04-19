#include <stdio.h>
int myAdd(int a,int b)///定義函式
{
    return a+b;
}
void myPrint(int a)
{
    for(int i=1;i<=a;i++)
    {
        printf("*");
    }
    printf("\n");
}
int main()
{
    int ans=myAdd(3,4);///呼叫函式
    printf("Hello World: %d\n",ans);
    myPrint(ans);///呼叫函式
}
