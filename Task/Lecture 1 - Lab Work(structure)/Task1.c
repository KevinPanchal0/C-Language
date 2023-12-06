#include<stdio.h>
struct Student{
	int	 stu_id;
	char stu_name[10];
	int	 stu_age;
	char stu_course[20];
	char stu_city[20];
	int	 stu_std;
	char stu_school[25];
}s;
void main(){
	
		printf("Enter the Student Id: ");
		scanf("%d",&s.stu_id);
		printf("Enter the Student Name: ");
		scanf("%s",&s.stu_name);
		printf("Enter the Student age: ");
		scanf("%d",&s.stu_age);
		printf("Enter the Student Course: ");
		scanf("%s",&s.stu_course);
		printf("Enter the Student city: ");
		scanf("%s",&s.stu_city);
		printf("Enter the Student Std: ");
		scanf("%d",&s.stu_std);
		printf("Enter the Student School: ");
		scanf("%s",&s.stu_school);
		
		printf("\n\nPrinting All the Information: \n");
		printf("Student Id: %d \n",s.stu_id);
		printf("Student Name: %s \n",s.stu_name);
		printf("Student Age: %d \n",s.stu_age);
		printf("Student Course: %s \n",s.stu_course);
		printf("Student City: %s \n",s.stu_city);
		printf("Student Std. : %d \n",s.stu_std);
		printf("Student School: %s \n",s.stu_school);
}
