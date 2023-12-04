#include<stdio.h>
void Sum (int m){
		int a[m];
		int i,sum=0;
		for(i=0;i<m;i++){
			printf("Enter the Elements of Array: ");
			scanf("%d",&a[i]);
		}
		
		for(i=0;i<m;i++){
			sum=sum+a[i];
		}
		
		printf("The sum of Array is %d",sum);
		
}
void main(){
		int n;
		int i;
		printf("Enter the size of Array: ");
		scanf("%d",&n);
		
		Sum (n);
		
}
