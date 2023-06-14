#include <stdio.h>
int bit_operations(int num, int oper_type) {
    int result = 0;
    if (oper_type == 1) {
        result = num | (1 << 0);
    } else if (oper_type == 2) {
        result = num & ~(1 << 31);
    } else if (oper_type == 3) {
        result = num ^ (1 << 16);
    }
    return result;
}
int main() {
    int result,num,type;
    scanf("%d %d",&num,&type);
    result = bit_operations(num, type);
    printf("%d\n", result);
    return 0;
}