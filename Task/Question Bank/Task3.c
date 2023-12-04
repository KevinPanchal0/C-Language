#include<stdio.h>
void main(){
	int a;
	
	printf("Enter the year: ");
	scanf("%d",&a);
	
	if(a/4==0 || a/400){
		printf("Enter year is a leap year.");
	}
	else{
		printf("Entered year is not a leap year.");
	}
}
