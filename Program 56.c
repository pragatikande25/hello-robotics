#include <stdio.h>
int main()
{
    int sum=0;
    for(int i=2; i<=20; i+=2) sum += i;
    printf("Sum of evens = %d", sum);
    return 0;
}
