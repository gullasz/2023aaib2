///字串很長 <10位數
///Q1有多長 Q2 如何判斷
#include <string.h>
#include <stdio.h>
int main()
{
	char line[20];
	scanf("%s",line);
    int N=strlen(line),bad=0;
    for(int i=0;i<N;i++)
    {
        if(line[i]!=line[N-1-i])bad=1;
    }///對應數字不同就失敗
    ///0123456789 共十個數字
    ///0        9相加=9
    /// 1      8 相加=9
    ///  2    7  相加=9
    ///   3  6   相加=9
    ///    45    相加=9
    ///    45    相加=9
    ///   3  6   相加=9
    ///  2    7  相加=9
    /// 1      8 相加=9
    ///0        9相加=9
    if(bad==1)printf("NO\n");
    else printf("YES\n");
}

