#include <stdio.h>

int main(void) {
  
  
// **** Address Arithmetic of Multidimensional Arrays **** //
    
    // ### For 1D Array ###
    
    int a[4] = {1,2,3,4};
    printf("%d ", *a);
    // Gives value of base address element
    printf("%d \n", a);
    // Gives base address of array
    
    // ### 2D Array ###
    
    int b[2][2] = { {1, 2}, {3, 4}};
    
    printf("%d ", *b);
    // Gives address of 1st 1D array inside the 2D array i.e. {1, 2}
    printf("%d ", **b);
    // By putting ** element of 1st 1D array inside the 2D array i.e. 1
    
    // *b = *(b + 0) = b[0] = &b[0][0]
    
    // to get 3
    printf("%d ", *(*(b+1)));
    // to get 2
    printf("%d ", *(*b+1));
    // to get 4
    printf("%d \n", *(*(b+1) + 1));
    
    // ### 3D Array ###
    
    int c[2][2][2] = { {{1,2}, {3,4}}, {{5,6}, {7,8}} };
    
    printf("%d ", *c);
    printf("%d ", **c);
    printf("%d ", ***c);
    
    // to get last element of array
    printf("%d ", *(*(*(c+1)+1)+1));
    // to get 6
    printf("%d \n", *(*(*(c+1))+1));

  return 0;
}
