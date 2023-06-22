#include<stdio.h>
#include<stdlib.h>

struct student {
    char name[20];
    int roll;
    float marks;
};

void display(struct student arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%s %d %f\n", arr[i].name, arr[i].roll, arr[i].marks);
    }
}

int main()
{
    struct student arr[100];
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    printf("Enter the details of students:\n");
    for (i = 0; i < n; i++)
    {
        printf("Name: ");
        scanf("%s", arr[i].name);
        printf("Roll: ");
        scanf("%d", &arr[i].roll);
        printf("Marks: ");
        scanf("%f", &arr[i].marks);
    }
    display(arr, n);
    return 0;
}