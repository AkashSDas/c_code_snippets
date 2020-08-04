#include <stdio.h>

int main(void) {
  
  // #### String Literals #### //
    
    // String Literal(String Constant) is a sequence of characters enclosed within double quotes
    // eg: "Hello world", "I am Human"
    
    printf("%s \n", "Hello World");
    
    // Note: String Literal always contain " " and not ''
    // printf("%s \n", 'Hello World'); <=== this is wrong
    
    printf("%s \n", "Don't do things that don't add value to your life.\
    -- Don't be with people who don't add value to your life");
    // considered 4 space before --
    
    // Better way is
    // Use set of quotes
    printf("%s \n", "Don't do things that don't add value to your life."
    "-- Don't be with people who don't add value to your life");
    // does not consider the indentation before --

  return 0;
}
