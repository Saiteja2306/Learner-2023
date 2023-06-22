#include <stdio.h>
#include<string.h>

struct student
{
    char name[50];
    int age;
    float marks;
};
typedef struct student student;
 
void SearchStudent(student * student );
 
int main()
{
    int i;
    student student[5];
    for (i = 0; i < 5; i++)
    {
        student[i].name[0] = '\0';
        student[i].age = 0;
        student[i].marks = 0;
    }
    SearchStudent(student);
    return 0;
}
 
void SearchStudent(student * student)
{
    int i;
    printf("Enter the name of the student : ");
    scanf("%s", student->name);
    printf("Enter the age of the student : ");
    scanf("%d", &student->age);
    printf("Enter the marks of the student : ");
    scanf("%f", &student->marks);
    for (i = 0; i < 5; i++)
    {
        if (strcmp(student[i].name, student->name) == 0)
        {
            printf("Student found : \n");
            printf("Name : %s\n", student[i].name);
            printf("Age : %d\n", student[i].age);
            printf("Marks : %f\n", student[i].marks);
            break;
        }
    }
    if (i == 5)
    {
        printf("Student not found : \n");
    }
    return;

}