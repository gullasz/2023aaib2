#include <stdio.h>
int myAdd(int a,int b)///�w�q�禡
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
    int ans=myAdd(3,4);///�I�s�禡
    printf("Hello World: %d\n",ans);
    myPrint(ans);///�I�s�禡
}
