#include <stdio.h>

int main(void) {
  
   // #### String Literals VS Character Constant #### //
    
    // They are not same 
    // "H" != 'H'
    // "H" ==> it is represented by a pointer to a character 'H'
    // 'H' ==> it is represented by ASCII code
    
    // printf requires a string literal and not a character constant
    // printf('h'); <---- It is wrong
    // printf("h"); <---- It is right
    
    // printf is excepting a pointer not a integer

  return 0;
}
