#include <stdio.h>

int main(void) {
  
  // ## Value Operators ## //
    
    // Value of operator/indirection function/dereferencing operator is an operator is used to access the value stored ar=t the location pointed by the pointer
    int z = 5;
    int *ptr2;
    ptr2 = &z;
    printf("%d\n", *ptr2);
    
    // We can also change the value of the object pointed by the pointer
    *ptr2 = 4;
    printf("%d\n", *ptr2);
    
    // !! NOTE
    
    // 1. Undefined Behaviour:
    // Never apply the dereferencing operator to the unitialzied pointer
    // eg:
    //      int *ptr;
    //      printf("%d", *ptr);
    
    // 2. Segmentation Fault:
    // Assinging value to uninitialized pointer is dangerous
    // eg:
    //      int *ptr;
    //      *ptr = 1;
    // This error caused when the program read/write an illegal memory location

  return 0;
}
