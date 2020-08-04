#include <stdio.h>

int main(void) {
  
  // #### Strings using printf and puts #### //
    
    // 1. printf
    char *ptr = "Hello World";
    printf("%s \n", ptr);
    
    // To print part of String use %.ns
    printf("%.5s \n", ptr);
    // To print part of string within a specified field use %m.ns
    printf("%6.5s \n", ptr);
    
    // 2. puts
    // it automatically writes new line.
    char *s = "Hello";
    puts(s);
    puts(s);
  
  return 0;
}
