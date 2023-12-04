#include<stdio.h>

void main(){
	int a,b;
	int *temp;
	int *i;
	int *j;
	
	printf("Enter the Value of A: ");
	scanf("%d",&a);
	
	printf("Enter the Value of B: ");
	scanf("%d",&b);
	
	i=&a;
	j=&b;
	printf("Before Swaping:\nA=%d\nB=%d",*i,*j);
	
	temp = *i;
	*i = *j;
	*j = temp;
	printf("\nAfter Swaping:\nA=%d\nB=%d",*i,*j);
}
