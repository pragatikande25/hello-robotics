#include <stdio.h>
int main() 
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n > 0) printf("Positive");
    else printf("Not Positive");
    return 0;
}
