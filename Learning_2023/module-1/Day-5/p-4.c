#include<stdio.h>
typedef struct class
{
    int rollno;
    char name[30];
    float marks;
}student;
int main()
{
    int n,i;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    student s[n];
    for(i=0;i<n;i++)
    { 
        printf("Enter the roll number of student %d: ",i+1);
        scanf("%d",&s[i].rollno);
        printf("Enter the name of student %d: ",i+1);
        scanf("%s",s[i].name);
        printf("Enter the marks of student %d\n: ",i+1);
        scanf("%f",&s[i].marks);
    }
    for(i=0;i<n;i++)
    {
        printf("Roll number of student %d: %d\n",i+1,s[i].rollno);
        printf("Name of student %d: %s\n",i+1,s[i].name);
        printf("Marks of student %d: %.2f\n",i+1,s[i].marks);
        printf("\n");
    }
    return 0;
    
}