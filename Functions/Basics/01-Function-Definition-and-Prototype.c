// ##### 1. Function Definition and Prototype ##### //

#include <stdio.h>

// Function Prototype
char func();

int main(){
   
    // **** FUNCTION DECLARATION (FUNCTION PROTOYPE) ****:
    // Syntax:
    //  return_type function_name(parameters);
    //  eg:  int func(int, char);  
    // eg: int func(int var1, char var2); Not necessary to mention  the namespace
    
    // Example:
    
    char c = func();
    printf("character is %c", c);
    
    return 0;
}

char func(){
    return 'a';
}

// If you don't mention the prototype then while compiler in main() function it will assume implictly the return type of function declared is integer, if it doesn't match then it gives a conflicting error
