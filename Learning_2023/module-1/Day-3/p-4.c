#include<stdio.h>
int LargestValue(int n)
{
    int max=0;
    while(n>0)
    {
        int lastdig=n%10;
        if(max<lastdig)
        {
            max=lastdig;
        }
        n=n/10;
    }
    return max;
}
int smallestValue(int n)
{
    int min=999999;
    while(n>0)
    {
        int lastdig=n%10;
        if(min>lastdig)
        {
            min=lastdig;
        }
        n=n/10;
    }
    return min;
}
int main()
{
    int n;
    scanf("%d",&n);
    int i=0,input;
    for(i=0;i<n;i++)
    {
        scanf("%d",&input);
        int l=LargestValue(input);
        int s=smallestValue(input);
        printf("%d and %d\n",s,l);
    }

}