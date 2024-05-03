
///计10000Τ碭借计
#include <stdio.h>
int isPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{
    ///ノBOUND跑计璶砞絛瞅т2窾借计
    int BOUND=300000,ans=0;
    for(int i=2;i<BOUND;i++)
    {
        if(isPrime(i))
        {
            printf("%d ",i);
            ans++;
        }
    }
    printf("借计Τ%d\n",ans);
}
