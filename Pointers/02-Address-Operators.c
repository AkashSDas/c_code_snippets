#include <stdio.h>

int main(void) {
  
  // ## Address Operator ## //
   
   int x = 5;
   int *ptr; 
   // Pointer is also a variable, so it will also takes some memory
   ptr = &x;
   // & is address operator
   
   printf("%d\n", x);
   printf("%p \n", ptr);
   printf("%p \n", &x);

   // %p is identifier for pointer variables
   
   // We can also do:
   
   int y=7, *ptr1=&y;
   //printf("%d\n", ptr);

  return 0;
}
