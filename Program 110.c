#include <stdio.h>
int main() 
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int fact=1;
        for(int j=1;j<=i;j++) fact*=j;
        sum+=fact;
    }
    printf("Sum = %d",sum);
    return 0;
}
