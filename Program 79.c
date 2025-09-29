#include <stdio.h>
int main() 
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    if(age >= 18) printf("Eligible for Driving License");
    else printf("Not Eligible");
    return 0;
}
