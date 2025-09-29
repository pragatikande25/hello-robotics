#include <stdio.h>
int gcd(int a,int b){ return (b==0)?a:gcd(b,a%b); }
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int res=a[0];
    for(int i=1;i<n;i++) res=gcd(res,a[i]);
    printf("%d",res);
    return 0;
}
