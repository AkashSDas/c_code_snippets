#include <stdio.h>

int main(void) {
  
   // ** 3D Array ** //
    
    int arr2[2][3][4] = {{{1,2,3,4}, {5,6,7,8}, {9,10,11,12}}, {{13,14,15,16}, {17,18,19,20}, {21,22,23,24}}};
    
    // Accessing the elements
    printf("%d\n", arr2[1][2][0]);
    printf("%d\n", arr2[0][1][2]);
    
    // Printing entire 2D Array
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<4; k++){
                printf("%d ", arr2[i][j][k]);
            }
        }    
    }
    
    printf("\n%ld", sizeof(arr2));
    printf("\n%ld", sizeof(arr2)/sizeof(arr2[0]));
    printf("\n%ld", sizeof(arr2)/sizeof(arr2[0][0]));
    printf("\n%ld", sizeof(arr2)/sizeof(arr2[0][0][0]));

  return 0;
}
