#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>0){
        if(n%2==0){
            if(n%5==0) printf("Positive, Even, and divisible by 5");
            else printf("Positive and Even, but not divisible by 5");
        } else printf("Positive but Odd");
    } else printf("Negative or Zero");
    return 0;
}
