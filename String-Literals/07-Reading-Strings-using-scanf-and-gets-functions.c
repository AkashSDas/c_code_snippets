#include <stdio.h>

int main(void) {
  
  // #### Reading Strings using scanf and gets functions #### //
    
    // 1. scanf
    char a[10];
    printf("Enter string: \n");
    scanf("%s \n", a);
    printf("%s \n", a);
    
    // scanf() doesn't store the white space characters in the string variable
    // It reads only upto 1st white-space
    
    // 2. gets
    char a[10];
    printf("Enter string: \n");
    gets(a);
    printf("%s \n", a);
    // program may crash when entires are more than space given to array a
    
    // scanf is prefered by using %ns where n indicates number of characters allowed to store in character array
    char a[10];
    printf("Enter string: \n");
    scanf("%9s \n", a);
    printf("%s \n", a);
    
    // if you use gets() it will try to write characters beyond the memory allcocated to the character array which is unsafe because it will simply over write the memory beyond the memory allcocated to the character array.

  return 0;
}
