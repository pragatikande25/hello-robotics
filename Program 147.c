#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int c=1;
        for(int j=0;j<=i;j++){
            printf("%d ",c);
            c=c*(i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}
