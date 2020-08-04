#include <stdio.h>

int main(void) {
  
  // #### Storing of String Literals #### //
    
    printf("Earth\n");
    
    // "Earth" is a string literal
    
    // First argument to printf/scanf function is always a string literal.
    
    // String literals are stored as an array of characters
    char *arr[6] = {"E", "a", "r", "t", "h", "\0"};
    // \0 <--- indicates the end of string.
    // It is a Null Character.
    // The entire string literal allcocates 6bytes read only memory
    // \0 != 0
    // **************************************** //
    
    // What we are actually passing to the printf/scanf
    // In C, Complier treats string literal as a pointer to the first character.
    // So to printf/scanf we are passing the pointer to the first character of a string literal.
    
    // Both printf/scanf function expects a character pointer (char*) as an argument
    // Passing "Earth" is equivalent to passing the pointer to letter "E"

  return 0;
}
