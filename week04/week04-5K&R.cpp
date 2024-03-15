///K&R
#include <stdio.h>
int main() {
    int n,a,b;
    scanf("%d",&n);///n筆資料
    for (int i=0; i<n; i++) {
        scanf("%d",&a);///還有a個數字
        int ans=0;
        for(int j=0; j<a; j++) { ///讀入a個數字
            scanf("%d",&b);
            ans+=b;
        }
        printf("%d\n",ans);///印答案
    }


}
