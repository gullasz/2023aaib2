///�r��ܪ� <10���
///Q1���h�� Q2 �p��P�_
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
    }///�����Ʀr���P�N����
    ///0123456789 �@�Q�ӼƦr
    ///0        9�ۥ[=9
    /// 1      8 �ۥ[=9
    ///  2    7  �ۥ[=9
    ///   3  6   �ۥ[=9
    ///    45    �ۥ[=9
    ///    45    �ۥ[=9
    ///   3  6   �ۥ[=9
    ///  2    7  �ۥ[=9
    /// 1      8 �ۥ[=9
    ///0        9�ۥ[=9
    if(bad==1)printf("NO\n");
    else printf("YES\n");
}

