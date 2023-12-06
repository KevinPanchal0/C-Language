#include<stdio.h>
void main()
{
	int n;
	
	printf("Enter the size of array: ");
	scanf("%d",&n);
    int a[n], i, *ptr;

    printf("Enter %d integer numbers\n", n);
    for(i = 0; i < n; i++){
    	scanf("%d", &a[i]);
	}
    
    ptr = &a[n - 1];

    printf("\nElements of array in reverse order ...\n");
    for(i = 0; i < n; i++){
    	  printf("%d ", *ptr--);
	}
}

