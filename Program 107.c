#include <stdio.h>
int main() 
{
    int n,t,sum=0;
    scanf("%d",&n);
    t=n;
    while(t){
        int r=t%10,f=1;
        for(int i=1;i<=r;i++) f*=i;
        sum+=f;
        t/=10;
    }
    if(sum==n) 
printf("Strong Number");
    else printf("Not Strong");
    return 0;
}
