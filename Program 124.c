#include <stdio.h>
int main() 
{
    int n,largest,second;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    largest=second=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest){ second=largest; largest=arr[i]; }
        else if(arr[i]>second && arr[i]!=largest) second=arr[i];
    }
    printf("Second largest=%d",second);
    return 0;
}
