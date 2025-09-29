#include <stdio.h>
int main() 
{
    int n,rem;
    char hex[32]; int i=0;
    scanf("%d",&n);
    while(n>0){
        rem=n%16;
        if(rem<10) hex[i++]='0'+rem;
        else hex[i++]='A'+(rem-10);
        n/=16;
    }
    for(int j=i-1;j>=0;j--) printf("%c",hex[j]);
    return 0;
}
