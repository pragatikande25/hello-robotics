#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int maxCount=0,maj;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++) if(a[j]==a[i]) count++;
        if(count>maxCount){ maxCount=count; maj=a[i]; }
    }
    if(maxCount>n/2) printf("Majority=%d",maj);
    else printf("No Majority");
    return 0;
}
