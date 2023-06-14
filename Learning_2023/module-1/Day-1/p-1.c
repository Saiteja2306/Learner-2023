#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    // if(a>b)
    // {
    //     printf("%d is Greater\n",a);
    // }
    // else{
    //     printf("%d is Greater",b);
    // }

    (a>b)? printf("%d is Greater\n",a) : printf("%d is Greater",b);
    return 0;

}
