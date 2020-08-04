#include <stdio.h>

int main(void) {
  
  // **** Size of Array with sizeof operator **** //
    
    // size = sizeof(name_of_array)/sizeof(name_of_array[0]);
    
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    
    printf("%d", size);
    
    printf("\n");

  return 0;
}
