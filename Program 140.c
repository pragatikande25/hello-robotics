#include <stdio.h>
int main()
{
    int x,y,p=1;
    scanf("%d%d",&x,&y);
    for(int i=1;i<=y;i++) p*=x;
    printf("%d",p);
    return 0;
}
