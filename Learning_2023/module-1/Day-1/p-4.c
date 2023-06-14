#include <stdio.h>
int main()
{
    int Num1,Num2;
    char oper;
    printf("Enter Number1: " );
    scanf("%d",&Num1);
    printf("Enter Oper:" );
    getchar();
    scanf("%c",&oper);
    printf("Enter Number2:" );
    scanf("%d",&Num2);
    switch(oper)
    {
      case '+':
        printf("%d + %d = %d",Num1,Num2,Num1+Num2);
        break;
    case '-':
       printf("%d-%d=%d",Num1,Num2,Num1-Num2);
       break;
    case '*':
    printf("%d*%d=%d",Num1,Num2,Num1*Num2);
    break;
    case '/':
    printf("%d/%d=%d",Num1,Num2,Num1/Num2); 
    break;
    default:
    printf("Invalid Operator");
    break;
    }
    return 0;
}