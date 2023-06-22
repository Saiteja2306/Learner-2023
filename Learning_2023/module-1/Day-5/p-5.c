#include<stdio.h>

typedef struct Swap1
{
    int a;
    int b;
}swap1;
// typedef struct Swap2
// {
//     int a;
//     int b;
// }swap2;
int main()
{
    swap1 s={33,87};
    swap1* a=&s;

    swap1 s2={23,26};
    swap1* b=&s2;
    printf("%d %d\n",a->a,a->b);
    printf("%d %d\n",b->a,b->b);
    swap1 *temp;
    temp=a;
    a=b;
    b=temp;
    printf("----------------------------------------------------------------------\n");
    printf("%d %d\n",a->a,a->b);
    printf("%d %d\n",b->a,b->b);
    return 0;

}