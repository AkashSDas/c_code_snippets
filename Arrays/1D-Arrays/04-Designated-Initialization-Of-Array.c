#include <stdio.h>

int main(void) {
  
   // **** Designated Initialization Of Array ****
    
    int arr[5] = {1, 0, 0, 2, 0};
    // To achieve above one
    
    int arr[5] = {[0] = 1, [3] = 2};
    int arr[5] = {[3] = 2, [0] = 2};
    
    int a[] = {[5] = 90, [20] = 4, [49] = 78};
    // length of obove array is 50 i.e. the largest designator + 1
    
    int a[] = {1, 5, 6, [5] = 90, 6, [8] = 4};
    
    // But if there is a clash then designated intializer will win
    int a[] = {1, 2, 3, [2] = 4};

  return 0;
}
