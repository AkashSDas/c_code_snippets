// Recursion is just calling function again and again

#include <stdio.h>

int func(int n);

int main(){
  int n = 3;
  printf("%d", func(n));
  return 0;
}

int func(int n){
  if(n == 1){
    return 1;
  }
  else{
    return 1 + func(n-1);
  }
}
