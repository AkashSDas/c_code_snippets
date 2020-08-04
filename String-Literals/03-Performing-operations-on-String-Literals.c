#include <stdio.h>

int main(void) {
  
      // #### Performing operations on String Literals #### //
    
    char *ptr = "Hello";
    
    // "Hello"[1] is equivalent to pointer to 'H'[1]
    printf("%c \n", *ptr);
    printf("%c \n", *(ptr+1));
    printf("%c \n", "Hello"[4]);
    printf("%c \n", "H"[2]); // It gives no output
    
    // Note:
    // - String Literals cannot be modified, it causes undefinied behaviour
    // eg:
    // char *ptr = "Hello";
    // *ptr = "M"; <----- Not allowed
    
    // String Literals are allocated only read only memory
    // Character Pointer is allocated read-write memory, So the same pointer can point to some other string literals

  return 0;
}
