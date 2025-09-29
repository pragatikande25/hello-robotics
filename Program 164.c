#include <stdio.h>

int main()
{
    char name[50];
    
    printf("Enter the name of the birthday person: ");
    scanf("%s", name);
    
    printf("\n*******************************\n");
    printf("*                             *\n");
    printf("*   Happy Birthday, %s!   *\n", name);
    printf("*                             *\n");
    printf("*******************************\n\n");

    printf("Wishing you a day filled with love, joy, and happiness!\n");

    return 0;
}
