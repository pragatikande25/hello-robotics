#include <stdio.h>
int main() 
{
    int n=153,temp=n,sum=0;
    while(n>0){
        int d=n%10;
        sum+=d*d*d;
        n/=10;
    }
    if(sum==temp) printf("Armstrong");
    else printf("Not Armstrong");
    return 0;
}
