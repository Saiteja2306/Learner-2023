//  - 90 to 100 -> "Grade A"
//     - 75 to 89 -> "Grade B"
//     - 60 to 74 -> "Grade C"
//     - 50 to 59 -> "Grade D"
//     - 0 to 49 -> "Grade F"
#include <stdio.h>
int main() {
    int grade;
    printf("Enter a Marks:");
    scanf("%d", &grade);
    if (grade >= 90) {
        printf("Grade A");
    } else if (grade >= 75) {
        printf("Grade B");
    } else if (grade >= 60) {
        printf("Grade C");
    } else if (grade >= 50) {
        printf("Grade D");
    } else {
        printf("Grade F");
    }
    return 0;
}