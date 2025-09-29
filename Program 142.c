#include <stdio.h>
int main() 
{
    int n,base=1,dec=0,r;
    scanf("%d",&n);
    while(n>0){ r=n%10; dec+=r*base; base*=2; n/=10; }
    printf("%d",dec);
    return 0;
}
