#include <stdio.h>
int main()
{
    double x = 0.7;
    int exponent;
    int result;
    exponent = (int)((x - (int)x) * (int)(1 << (8 * sizeof(int) - 1)));
    result = (int)(x * (int)(1 << (8 * sizeof(int) - 1))) + exponent;
    printf("x = %f\n", x);
    printf("x * (int)(  1 << (8 * sizeof(int) - 1)) = %f\n ", x);
    printf("x * (int)(  1 << (8 * sizeof(int) - 1)) + exponent = %f\n", result);
    return 0;
}