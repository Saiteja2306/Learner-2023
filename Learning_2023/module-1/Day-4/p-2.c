#include<stdio.h>
const int INT_MAX = 2147483646;
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
     int min=INT_MAX,max=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]<min)
        {
            min=arr[i];
        }
        if(arr[i]>max);
        {
            max=arr[i];
        }
    }
    printf("min:%d,Max:%d",min,max);
return 0;
}