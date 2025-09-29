#include <stdio.h>
int main() 
{
    char str[200];
    int c=0;
    fgets(str,200,stdin);
    for(int i=0;str[i];i++) if(str[i]==' ') c++;
    printf("Spaces=%d",c);
    return 0;
}
