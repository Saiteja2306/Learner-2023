
#include <stdio.h>
#include <string.h>
int main()
{
    int RollNum;
    char Name[200];
    float Phy,Mat,Che,total,percent;
    printf("Enter Roll Number: ");
    scanf("%d",&RollNum);
    printf("Enter Name: ");
    getchar();
    gets(Name);
    printf("Enter Physics: ");
    scanf("%f",&Phy);
    printf("Enter Maths: ");
    scanf("%f",&Mat);
    printf("Enter Chemistry: ");
    scanf("%f",&Che);
    total=Phy+Mat+Che;
    percent=total/3;
    printf("Total: %.2f\n",total);
    printf("Percentage: %.2f\n",percent);
    printf("----------------Summary of Student-----------\n  RollNumber: %d\n Name: %s\n total marks %.2f\n Percentage %.2f\n",RollNum,Name,total,percent);
    return 0;
}