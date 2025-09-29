#include <stdio.h>
int main() 
{
    int y;
    printf("Enter year: ");
    scanf("%d", &y);
    if(y % 100 == 0) printf("Century Year");
    else printf("Not Century Year");
    return 0;
}
