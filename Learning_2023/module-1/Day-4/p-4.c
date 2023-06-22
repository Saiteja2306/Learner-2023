#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int i;
    for(i=0;i<strlen(str);i++)
    {
        if(isupper(str[i]))
        {
            str[i]=tolower(str[i]);
        }
        else if(islower(str[i])){
            str[i]=toupper(str[i]);
        }
    }
     printf("%s",str);
}