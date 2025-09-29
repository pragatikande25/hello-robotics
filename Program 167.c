#include <stdio.h>
#include <math.h>
int main() 
{
    float a,b,c,d;
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0) printf("Real and Distinct Roots");
    else if(d==0) printf("Real and Equal Roots");
    else printf("Complex Roots");
    return 0;
}
