#include<stdio.h>
void factorial(int a){
		int f=1;
		int i;
		for(i=1;i<=a;i++){
			f=i*f;
		}
		printf("The Factorial of %d is %d",a,f);
}
void main(){
		int a;
		printf("Enter the Digit: ");
		scanf("%d",&a);
		
		factorial(a);
}
