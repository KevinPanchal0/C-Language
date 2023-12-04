#include<stdio.h>
void main(){
	char a;
	
	printf("Enter the value: ");
	scanf("%c",&a);
	
	if(a>=65 && a<=90){
		printf("Entered value is Upper Case Alphabet");
	}
	
	else if(a>=97 && a<=122){
		printf("Entered value is Lower Case Alphabet");
	}
	
	else if(a>=48 && a<=57){
		printf("Entered value is Digit");
	}
	
	else{
		printf("Entered value is character.");
	}
}
