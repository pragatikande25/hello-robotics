#include <stdio.h>
int main()
{
    int n,flag=1;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%d",&a[i][j]);
    for(int i=1;i<n;i++) for(int j=0;j<i;j++) if(a[i][j]!=0) flag=0;
    if(flag) printf("Upper Triangular");
    else printf("Not Upper Triangular");
    return 0;
}
