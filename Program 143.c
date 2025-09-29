#include <stdio.h>
int main() 
{
    int n,oct[32],i=0;
    scanf("%d",&n);
    while(n>0){ oct[i++]=n%8; n/=8; }
    for(int j=i-1;j>=0;j--) printf("%d",oct[j]);
    return 0;
}
