#include <stdio.h>
#include <string.h>
int main() 
{
    char str[50];
    scanf("%s", str);
    int l=strlen(str);
    for(int i=l-1;i>=0;i--) printf("%c",str[i]);
    return 0;
}
