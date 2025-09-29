#include <stdio.h>
int main() 
{
    char str[100];
    int d=0,l=0,o=0;
    scanf("%s",str);
    for(int i=0;str[i];i++){
        if(str[i]>='0'&&str[i]<='9') d++;
        else if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')) l++;
        else o++;
    }
    printf("Digits=%d Letters=%d Others=%d",d,l,o);
    return 0;
}
