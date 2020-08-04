#include <stdio.h>


int main(){
   
    // **** Call By Value ****
    
    // Arguments & Parameter stores value at diiferent location
    
    // Example:
    int x=10, y=20;
    
    int func(int x, int y){
        x=20;
        y=10;
    }
    
    func(x, y);
    
    printf("x=%d y=%d", x, y);
    
    //Output: x=10 y=20
    
    // **** Call By Reference ****
    
    // Arguments & Parameter stores value at same location
    // Instead of passing values we pass addresses
    
    // Example:
    int x=10, y=20;
    
    int func(int *ptr1, int *ptr2){
        *ptr1 = 20;
        *ptr2 = 10;
    }
    
    func(&x, &y);
    
    //Output: x = 20 y = 10
    
    
    return 0;
}
