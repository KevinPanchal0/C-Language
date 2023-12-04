#include<stdio.h>
void main(){
	int month;
	
	printf("Enter the number to get week day: ");
	scanf("%d",&month);
	
	switch(month){
		case 2 :
			printf("Monday");
			break;
		
		case 3 :
			printf("Tuesday");
			break;
			
		case 4 :
			printf("Wednesday");
			break;
			
		case 5 :
			printf("Thursday");
			break;
			
		case 6 :
			printf("Friday");
			break;
			
		case 7 :
			printf("Satarday");
			break;
			
		case 1 :
			printf("Sunday");
			break;
			
		default :
			printf("Enter value from 1 to 7");
	}
}
