#include<stdio.h>
void main(){
	int month;
	
	printf("Enter the number to get month(1 to 12): ");
	scanf("%d",&month);
	
	if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
		printf("This Month Contain 31 Days");
	}
	else if(month==4|| month==6 || month==9 || month==11){
		printf("This Month Contain 30 Days");
	}
	else if(month==2){
		printf("This Month contain 28/29 Days");
	}
	else{
		printf("Enter value from 1 to 12");
	}
}
