#include<stdio.h>
void main(){
	int a,b,c,max;
	
	printf("Enter the value A: ");
	scanf("%d",&a);

	printf("Enter the value B: ");
	scanf("%d",&b);
	
	printf("Enter the value C: ");
	scanf("%d",&c);
	
	if(a>b){
		if(a>c){
			max=a;
		}
		else{
			max=c;
		}
	}
	else{
		if(b>c){
			max=b;
		}
		else{
			max=c;
		}
	}
	
	printf("%d is Max.",max);
}
