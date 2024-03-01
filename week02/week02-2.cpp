///float 浮點數
///double 兩倍浮點數
#include <stdio.h>
int main()
{
    float pi=3.14159265358979323;
    ///      ^^^^^^^^
    double pi2=3.14159265358979323;
    ///        ^^^^^^^^^^^^^^^^^
    printf("float %f\n",pi);
    printf("float %f\n",pi2);
    printf("float 10位 %10f\n",pi);
    printf("float 10位 %10f\n",pi2);
    printf("float 10位 %20.18f\n",pi);
    printf("float 10位 %20.18f\n",pi2);
}
