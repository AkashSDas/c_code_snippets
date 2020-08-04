#include <stdio.h>

int main(void) {

  // **** Initializing an Array ****
    // 1.
    int arr[5] = {1, 2, 3, 4, 5};
    // 2.
    int arr[] = {1, 2, 3, 4, 5};
    // 3.
    int arr[5];
    arr[0] = 1;
    arr[1] = 2;
    // 4.
    int arr[5];
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    
    
    
int arr[10] = {0};

// Illegal:
// int arr[3] = {1, 2, 3, 4};
// int arr[1] = {};

  return 0;
}
