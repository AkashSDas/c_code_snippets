#include <stdio.h>

int main(void) {
  
  // **** Using Pointers to Print 2D Array **** //
    
    // Difference between Row Major & Column Major Order
    
    // Row major order: Elements are stored row by row
    // Column major order: Elements are stored column by column
    
    // C stores multidimensional arrays in row major order
    
    int a[3][2] = { {1, 2}, {3, 4}, {5, 6} };
    
    // Traditionally
    // We use two for loops to iterate through 2D arrays
    int row=3, col=2;
    // We have 3 rows and 2 columns
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ", a[i][j]);
        }
    }
    
    printf("\n");
    
    // Using Pointers
    for(int *p=&a[0][0]; p<=&a[row-1][col-1]; p++){
        printf("%d ", *p);
    }

  return 0;
}
