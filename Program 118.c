#include <stdio.h>
#include <string.h>
int main() 
{
    char str[50];
    scanf("%s", str);
    int l=strlen(str), f=1;
    for(int i=0;i<l/2;i++){
        if(str[i]!=str[l-i-1]) f=0;
    }
    if(f) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}
