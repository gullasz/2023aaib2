
///數10000以下有幾個質數
#include <stdio.h>
int main()
{
    int BOUND=20000,ans=0;
    int table[20000]={};///給table初始值為0
    for(int i=2;i<BOUND;i++)
    {
        if(table[i]==0)
        {
            ans++;
            for(int k=i*i;k<BOUND;k+=i)
            {
                table[k]=-1;
            }
        }
    }
    printf("質數有%d個\n",ans);
}
