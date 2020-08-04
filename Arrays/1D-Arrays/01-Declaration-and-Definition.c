#include <stdio.h>

int main(void) {
  
   // Data Structure: It is a formal for organizing and storing data
    // Also, each data structure is designed to organize data to suit specific purpose
    // eg: Array
    
    // Array have all elements of same data type
/////////////////////////////////////////////////////////////////////////////    
    // **** Declaraction and Definition of 1D Array ****
    
    // Syantax:
    
    int arr1[5];
    int arr2[5+9];
    int arr3[5*3];
    
    // Not Possible:
    // int arr[-1];
    // int arr[5.43];
    
    // Specificing the length of array using MACRO is best way
    
    #define N 10
    int arr[N];

  return 0;
}
