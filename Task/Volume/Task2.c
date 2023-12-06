#include <stdio.h>
union Marks {
    struct {
        int roll_no;
        char name[50];
        int chem_marks;
        int maths_marks;
        int phy_marks;
    } student[5];
};

int main() {
    union Marks students;
	int i;
    for (i = 0; i < 5; ++i) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students.student[i].roll_no);
        printf("Name: ");
        scanf("%s", students.student[i].name);
        printf("Chemistry Marks: ");
        scanf("%d", &students.student[i].chem_marks);
        printf("Mathematics Marks: ");
        scanf("%d", &students.student[i].maths_marks);
        printf("Physics Marks: ");
        scanf("%d", &students.student[i].phy_marks);
        printf("\n");
    }

    for (i = 0; i < 5; ++i) {
        float total_marks = students.student[i].chem_marks + students.student[i].maths_marks + students.student[i].phy_marks;
        float percentage = (total_marks / 300) * 100;

        printf("\nDetails for student %d:\n", i + 1);
        printf("Roll No: %d\n", students.student[i].roll_no);
        printf("Percentage: %.2f%%\n", percentage);
    }

    return 0;
}
