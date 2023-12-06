#include<stdio.h>
void div(int a, int b, int *plus, int *multiplication) {
   *plus = a + b;
   *multiplication = a * b;
}
main() {
   int a,b;
   printf("Enter the value of A: ");
   scanf("%d",&a);
   
   printf("Enter the value of B: ");
   scanf("%d",&b);
   int p, m;
   div(a, b, &p, &m);
   printf("Addition is: %d\nMultiplication is: %d\n", p, m);
}

