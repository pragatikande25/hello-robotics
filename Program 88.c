#include <stdio.h>
int main() 
{
    int a,b;
    scanf("%d%d",&a,&b);
    while(b!=0){ int t=b; b=a%b; a=t; }
    printf("GCD = %d",a);
    return 0;
}
