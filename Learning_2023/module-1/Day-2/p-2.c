#include <stdio.h>

void Int_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void Float_swap(float *a, float *b)
{
    float temp = *a;
    *a = *b;
    *b = temp;
}
void Char_swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}



 int main()
 {
    int opt;
     printf("------------menu-------------\n 1:integer\n 2:float\n 3:char\n ");
    scanf("%d", &opt);
    switch(opt)
    {
        case 1:
                {
                    int a, b;
                    printf("enter a and b\n");
                    scanf("%d %d", &a, &b);
                    Int_swap(&a, &b);
                    printf("a = %d\n", a);
                    printf("b = %d\n", b);
                    break;
                }
                case 2:
                {
                    float a, b;
                    printf("enter a and b\n");
                    scanf("%f %f", &a, &b);
                    Float_swap(&a, &b);
                    printf("a = %f\n", a);
                    printf("b = %f\n", b);
                    break;
                }
                case 3:
                {
                    char a, b;
                    printf("enter a and b\n");
                    getchar();
                    scanf("%c %c", &a, &b);
                    Char_swap(&a, &b);
                    printf("a = %c\n", a);
                    printf("b = %c\n", b);
                    break;
                }
                default:
                {
                    printf("invalid option\n");
                    break;
                }
    }
    return 0;

 }