#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],b[n],flag=1;
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++) scanf("%d",&b[i]);
    int start=-1;
    for(int i=0;i<n;i++) if(b[i]==a[0]){ start=i; break; }
    if(start==-1) flag=0;
    for(int i=0;i<n && flag;i++) if(a[i]!=b[(start+i)%n]) flag=0;
    if(flag) printf("Yes");
    else printf("No");
    return 0;
}
