#include <stdio.h>
int main()
{
    int n,max=1,count=1;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]) count++;
        else count=1;
        if(count>max) max=count;
    }
    printf("Length=%d",max);
    return 0;
}
