#include <stdio.h>

int main(void) {
  
  // ### Pointer Pointing to an Entire Array ### //
    
    int d[5] = {1,2,3,4,5};
    int *q = d;
    printf("%d ", *q);
    // Pointer returns 1st element if array ==> 1
    
    int (*p)[5] = &d;
    // Here p is pointer to the whole array of 5 elements
    // Here & is taking me out of 1st element address and points to the eniter array
    printf("%d ", **p);
    // 1st * takes me inside the array and 2nd * takes me to 1st element of the array
    
    // Important:
    printf("%d \n", (*p)[0]);
    
    // Example:
    int x[][3] = {1,2,3,4,5,6};
    int (*ptr)[3] = x;
    printf("%d %d ", (*ptr)[1], (*ptr)[2]); // (*ptr)[1] = *((*ptr) + 1)
    ++ptr;
    printf("%d %d", (*ptr)[1], (*ptr)[2]);

  return 0;
}
