#include <stdio.h>
int main() 
{
    int n,rev=0,t;
    scanf("%d",&n);
    t=n;
    for(;t>0;t/=10) rev=rev*10+t%10;
    if(n==rev) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}
