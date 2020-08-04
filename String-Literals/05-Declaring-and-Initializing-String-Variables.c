#include <stdio.h>

int main(void) {
  
  // #### Declaring & Initializing String Variables #### //
    
    // A string variable is 1D array of character that is capable of holding a string at a time
    // It is not same as string literal since here you can modifiy it
    
    char s[6];
    //Note: Always make the array one character longer than the string , to make room for null character otherwise it will create a undefinied behaviour
    
    char str1[6] = "Hello";
    char str2[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    // Both are same
    
    // Short length initializer
    // s[7] = "Hello";
    // The extra rooms are occupied by \0
    
    // Long lenght initializer
    // s[4] = "Hello";
    // It will give warning
    
    // Same lenght initializer
    // s[5] = "Hello";
    // It will produce undefinied behaviour since no room for null character
    
    // Example:
    
    char s1[6] = "Hello";
    char s2[6];
    int i;
    for(i=0; s1[i]!='\0'; i++){
        s2[i] = s1[i];
    }
    s2[i] = '\0';
    printf("%s \n", s2);
    
    char string[] = "Hello";

  return 0;
}
