#include <stdio.h>
void myPrint(int a[10])
{
    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");
}
int main()
{
    int a[10]={9,8,7,6,5,4,3,2,1,0};///10�Ʀ�9�Ӷ��j
    myPrint(a);

    for(int i=0;i<=9;i++)///����k��9�Ӷ��j
    {
        if(a[i]>a[i+1])
        {
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    myPrint(a)    ;

}
