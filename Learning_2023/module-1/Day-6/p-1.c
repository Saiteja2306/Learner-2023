#include<stdio.h>
 struct Student{
    int rollno;
    char name[20];
    float marks;
};
typedef struct Student Student;
int main()
{
    Student s1;
    int n;
    scanf("%d",&n);
    Student arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %s %f",&arr[i].rollno,arr[i].name,&arr[i].marks);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d %s %f\n",arr[i].rollno,arr[i].name,arr[i].marks);
    }
    return 0;
}
