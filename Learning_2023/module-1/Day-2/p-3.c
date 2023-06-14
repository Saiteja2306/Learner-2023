#include <stdio.h>
int main()
{
    int n,i;
    int sum=0,o_sum=0;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sum+=arr[i];
        }
        
        else{
            o_sum+=arr[i];
        }
    }
    printf("sum is %d\n",sum);
    printf("O_sum is %d\n",o_sum);

}