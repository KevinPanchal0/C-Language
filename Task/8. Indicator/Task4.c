#include<stdio.h>
int getLength(char*p) {
   int count = 0;
   while (*p != '\0') {
      count++;
      p++;
   }
   return count;
}
int main() {
   char a[20];
   int length;
   printf("Enter the String: ");
   scanf("%s",&a);
   length = 0;
   length = getLength(a);
   printf("The length of the string \"%s\" is %d", a, length);
   return 0;
}

