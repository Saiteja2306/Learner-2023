#include<stdio.h>
int main()
{
    unsigned int n;
    int i=1;
    unsigned  int finalans=0;
    scanf("%d",&n);

    while(n!=0)
    {
        int x;
        x=n%2;
        finalans=finalans+(x*i);
        n=n/2;
        i=i*10;
       
    }
    printf("%d",finalans);
    
    return 0;
}