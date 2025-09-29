#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int num=1;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            for(int j=1;j<=n;j++) printf("%d ",num++);
        }else{
            int temp=num+n-1;
            for(int j=1;j<=n;j++) printf("%d ",temp--);
            num+=n;
        }
        printf("\n");
    }
    return 0;
}
