#include <stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    for(int i=5;i<=n;i*=5) count+=n/i;
    printf("Trailing zeros=%d",count);
    return 0;
}
