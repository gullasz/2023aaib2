///K&R
#include <stdio.h>
int main() {
    int n,a,b;
    scanf("%d",&n);///n�����
    for (int i=0; i<n; i++) {
        scanf("%d",&a);///�٦�a�ӼƦr
        int ans=0;
        for(int j=0; j<a; j++) { ///Ū�Ja�ӼƦr
            scanf("%d",&b);
            ans+=b;
        }
        printf("%d\n",ans);///�L����
    }


}
