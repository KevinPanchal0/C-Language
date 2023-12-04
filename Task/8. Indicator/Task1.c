#include<stdio.h>
void main(){
	int n,i;
	
	printf("Enter the size of Array: ");
	scanf("%d",&n);

	int a[n];
	
	for(i=0;i<n;i++){
		printf("Enter the elements: ");
		scanf("%d",&a[i]);
	}
	int *p;
	for(i=0;i<n;i++){
		p = &a[i];
		printf("%u ", *p);
	}
	
}
