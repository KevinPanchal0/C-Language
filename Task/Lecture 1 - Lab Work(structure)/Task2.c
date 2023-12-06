#include<stdio.h>
struct Student{
	int	 emp_id;
	char emp_name[10];
	int	 emp_age;
	char emp_role[20];
	char emp_city[20];
	int	 emp_experience;
	char emp_company_name[25];
}s;
void main(){
	
		printf("Enter the Employee’s Id: ");
		scanf("%d",&s.emp_id);
		printf("Enter the Employee’s Name: ");
		scanf("%s",&s.emp_name);
		printf("Enter the Employee’s age: ");
		scanf("%d",&s.emp_age);
		printf("Enter the Employee’s Role: ");
		scanf("%s",&s.emp_role);
		printf("Enter the Employee’s city: ");
		scanf("%s",&s.emp_city);
		printf("Enter the Employee’s experience: ");
		scanf("%d",&s.emp_experience);
		printf("Enter the Employee’s Company Name: ");
		scanf("%s",&s.emp_company_name);
		
		printf("\n\nPrinting All the Information: \n");
		printf("Employee’s Id: %d \n",s.emp_id);
		printf("Employee’s Name: %s \n",s.emp_name);
		printf("Employee’s Age: %d \n",s.emp_age);
		printf("Employee’s Role: %s \n",s.emp_role);
		printf("Employee’s City: %s \n",s.emp_city);
		printf("Employee’s eperience. : %d \n",s.emp_experience);
		printf("Employee’s Company Name: %s \n",s.emp_company_name);
}
