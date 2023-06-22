#include<stdio.h>

 struct student
{
 int roll;
 char name[20];
 int marks;
};
typedef struct student student;

void display(student student )
{
    printf("%d %s %d\n", student.roll, student.name, student.marks);

}

int main()
{
    int i;
    int n;
    student student[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %s %d", &student[i].roll, student[i].name, &student[i].marks);

    }
    for (i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (student[j].marks < student[j + 1].marks)
            {
                student[j].marks = student[j].marks + student[j + 1].marks;
                student[j + 1].marks = student[j].marks - student[j + 1].marks;
                student[j].marks = student[j].marks - student[j + 1].marks;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        display(student[i]);
    }
    return 0;
}