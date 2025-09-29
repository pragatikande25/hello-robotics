#include <stdio.h>
int main() 
{
    int t;
    printf("Enter temperature: ");
    scanf("%d", &t);
    if(t > 30) printf("Hot Day");
    else printf("Cold Day");
    return 0;
}
