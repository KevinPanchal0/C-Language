#include<stdio.h>
void main(){
	int a;
	int *b;
	int square;
	printf("Enter the No. to get square: ");
	scanf("%p",&a);
	
	b = &a;
	square= (*b)*(*b);
	printf("The sqaure is: %d",square);
}
