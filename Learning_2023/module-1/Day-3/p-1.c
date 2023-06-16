#include <stdio.h>

void Fun1toN(int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%d",i);
    }
}
 
void FunNto1(int n)
{
    for(int i=n;i>=1;i--)
    {
        printf("%d",i);
    }
}
void FunSpaces(int n)
{
    for(int i=0;i<n*2;i++)
    {
         printf(" ");
    }
}



int main()
{
    int n,i;
    scanf("%d",&n);
    int temp=n;
    for(i=n;i>=1;i--)
    {
        Fun1toN(i);
        FunSpaces(temp-i);
        FunNto1(i);
         printf("\n");
    }

    return 0;
}