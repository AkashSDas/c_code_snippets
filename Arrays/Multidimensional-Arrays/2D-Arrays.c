#include <stdio.h>

int main(void) {
  
  // ** 2D Array ** //
    
    int arr1[4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};

    // Accessing the elements
    printf("%d\n", arr1[2][0]);
    printf("%d\n", arr1[1][1]);
    
    // Printing entire 2D Array
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            printf("%d ", arr1[i][j]);
        }
    }

  return 0;
}
