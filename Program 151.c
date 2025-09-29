#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],k=0;
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        int j;
        for(j=0;j<k;j++) if(a[i]==a[j]) break;
        if(j==k) a[k++]=a[i];
    }
    for(int i=0;i<k;i++) printf("%d ",a[i]);
    return 0;
}
