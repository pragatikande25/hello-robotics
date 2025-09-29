#include <stdio.h>
#include <math.h>
int main()
{
    int n,t,sum=0,d=0;
    scanf("%d",&n);
    t=n;
    while(t){ d++; t/=10; }
    t=n;
    while(t){ int r=t%10; sum+=pow(r,d); t/=10; }
    if(sum==n) printf("Armstrong");
    else printf("Not Armstrong");
    return 0;
}
