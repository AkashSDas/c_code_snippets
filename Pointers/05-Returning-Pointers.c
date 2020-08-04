#include <stdio.h>

int main(void) {
  // ## Returning Pointers  ## //
    
    int main(){
        int a[] = {1,2,3,4,5};
        int n = sizeof(a)/sizeof(a[0]);
        int *mid = findMid(a, n);
        printf("%d", *mid);
        return 0;
    }
    
    int *findMid(int a[], int n){
        return &a[n/2];
        // This return's a value
    }
    // Output: 3
    
    // !!!Note: Never ever try to return the address to local variable(automatic variable)
    // Since local variable gets destroyed outside the function
    // Example:
    
    int *fun(){
        int i = 10;
        return &i;
        // Returning a variable 
    }
    
    int main(){
        int *p = fun();
        printf("%d", *p);
    }
    // This program will give Warning: function returns address of local variable
  return 0;
}
