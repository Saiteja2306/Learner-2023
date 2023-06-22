#include<stdio.h>

struct student
{
    int roll;
    char name[20];
    float marks;
    float avg;

};

int main()
{
    struct student s[10];
    int i;
    for(i=0;i<10;i++)
    {
        s[i].roll=i+1;
        s[i].name[20]='\0';
        s[i].marks=0.0;
        s[i].avg=0.0;
        printf("Enter the name of student %d: ",i+1);
        scanf("%s",s[i].name);
        printf("Enter the marks of student %d: ",i+1);
        scanf("%f",&s[i].marks);
        s[i].avg=s[i].marks;
        printf("\n");

    }
    for(i=0;i<10;i++)
    {   
        printf("%d\n",s[i].roll);
        printf("%s\n",s[i].name);
        printf("%f\n",s[i].marks);
        printf("%f\n",s[i].avg);
    }
    return 0;
}