#include <stdio.h>
int main() 
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n % 10 == 0) printf("Multiple of 10");
    else printf("Not multiple of 10");
    return 0;
}
