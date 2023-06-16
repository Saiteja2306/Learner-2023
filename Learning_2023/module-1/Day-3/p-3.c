#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,b,c;
    a=n%1000;
    b=n/10;
    c=(n/1000)*100+(n%100);
    if(a>b && a>c)
    {
        printf("%d\n",a);
    }
    else if(b>c && b>a)
    {
        printf("%d\n",b);
    }
    else{
        printf("%d\n",c);
    }
     return 0;

}