#include<stdio.h>
typedef struct complexNum 
{
    int real;
    int img;
} CoNum;

CoNum add(CoNum a, CoNum b){
    CoNum c;
    c.real = a.real + b.real;
    c.img = a.img + b.img;
    return c;
}
CoNum Multiply(CoNum a, CoNum b)
{
    CoNum c;
    c.real = a.real * b.real - a.img * b.img;
    c.img = a.real * b.img + a.img * b.real;
    return c;
}

int main()
{
    CoNum a, b,Add_Result,Multi_Result;
    printf(" Enter a complex number to addormultiply\n");
    scanf("%d%d", &a.real, &a.img);
    printf(" Enter b complex number to addormultiply\n");
    scanf("%d%d", &b.real, &b.img);
    Add_Result = add(a, b);
    Multi_Result = Multiply(a, b);
    printf(" Addition of two complex numbers is %d+%di\n", Add_Result.real, Add_Result.img);
    printf(" Multiplication of two complex numbers is %d+%di\n", Multi_Result.real, Multi_Result.img);
    return 0;
}
