#include<stdio.h>
#include<stdlib.h>
void main(){
	int op;
	int a,b;
	
	do{ 
	printf("Instruction of Simple Calculator: \n");
		printf("Enter 1 for Addition.\n");
		printf("Enter 2 for Substraction.\n");
		printf("Enter 3 for Multiplication\n");
		printf("Enter 4 for divide.\n");
		printf("Enter 5 to exit.\n");
		printf("Enter 6 to clear Screen.\n");	
	scanf("%d",&op);
	
	switch(op){
		case 1:
			printf("Enter the value of A: ");
			scanf("%d",&a);
			printf("Enter the value of B: ");
			scanf("%d",&b);
			
			printf("The Sum of A and B is %d\n\n",a+b);
			break;
			
		case 2:
			printf("Enter the value of A: ");
			scanf("%d",&a);
			printf("Enter the value of B: ");
			scanf("%d",&b);
			
			printf("The Sub. of A and B is %d\n\n",a-b);
			break;
			
		case 3:
			printf("Enter the value of A: ");
			scanf("%d",&a);
			printf("Enter the value of B: ");
			scanf("%d",&b);
			
			printf("The Multiplication of A and B is %d\n\n",a*b);
			break;
			
		case 4:
			printf("Enter the value of A: ");
			scanf("%d",&a);
			printf("Enter the value of B: ");
			scanf("%d",&b);
			
			printf("The Divide of A and B is %d\n\n",a/b);
			break;
			
		case 6:
			system("cls");
			break;
			
		default :
			printf("Enter No. only from the list. \n\n\n\n");
			break;
	}
		
	} while(op!=5);
}
