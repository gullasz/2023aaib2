#include <stdio.h>
#include <string.h>
int main()
{
    printf("請輸入你的英文名字: ");
    char s1[30];
    scanf("%s",s1);
    char s2[30]="你好!";///可在宣告字串時給值
    printf("%s %s\n",s1,s2);
    s1[0]='A';///把最前面字母改成'A'
    printf("你的名字被改成:%s\n",s1);

    printf("你的英文名字長度是:%d\n",strlen(s1));
}
