#include <stdio.h>

int main(){

  // Direct Recrsion means calling function in between

  int func(){
    //some code 
    func();
    //some code
  }

  return 0;
}
