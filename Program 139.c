#include <stdio.h>
#include <string.h>
int main() 
{
    char str[200];
    fgets(str,200,stdin);
    int l=strlen(str);
    for(int i=l-1;i>=0;i--) putchar(str[i]);
    return 0;
}
