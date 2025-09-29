#include <stdio.h>
int main()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    if(marks >= 75) printf("Distinction");
    else printf("No Distinction");
    return 0;
}
