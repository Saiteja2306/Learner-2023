#include<stdio.h>
#include<string.h>
int main()
{
    char str[220];
    scanf("%s",str);
    int i,sum=0;
    for(i=0;i<strlen(str);i++)
    {
        sum = sum * 10 + (str[i] - 48);

    }
    printf("%d\n",sum);
}