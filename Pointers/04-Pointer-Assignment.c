#include <stdio.h>

int main(void) {
  
  // ## Pointer Assignment ## //
    
    // Assign content of one pointer to another pointer
    
    int i = 10;
    int *p, *q;
    p = &i;
    p = q;
    printf("%p %p \n", p, q);
    printf("%d %d \n", *p, *q);
    // Here p and q are pointing in the same place and that is &i
    
    // !!!Note: p = q is not same as *p = *q
    
    int m = 10, n = 20;
    int *a, *b;
    a = &m;
    b = &n;
    *b = *a;
    printf("%d %d", *a, *b);

  return 0;
}
