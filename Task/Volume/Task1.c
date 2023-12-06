#include<stdio.h>
struct distances {
	int feet;
	float inch;
}d1,d2,result;

void main(){
	printf("Enter the First distances :\n");
	printf("Enter feet: ");
	scanf("%d",&d1.feet);
	printf("Enter inch: ");
	scanf("%f",&d1.inch);
	
	printf("Enter the Second distances :\n");
	printf("Enter feet: ");
	scanf("%d",&d2.feet);
	printf("Enter inch: ");
	scanf("%f",&d2.inch);
	
	result.feet=d1.feet+d2.feet;
	result.inch=d1.inch+d2.inch;
	
	printf("\nSum of distances = %d\'-%.1f\"", result.feet, result.inch);
	
}
