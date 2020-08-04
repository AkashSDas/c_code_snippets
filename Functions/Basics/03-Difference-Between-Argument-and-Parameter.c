#include <stdio.h>

int add(int, int);

int main(){
   
    // **** Difference Between Argument and Parameter ****
    
    //Parameter: It is a variable in the declaration and definition of the function
    //Argument: It is actual value of the parameter that gets passed to the function
    
    //NOTE: Parameter -> Formal Parameter
    //      Argument -> Actual Parameter
    
    // Example:
    int m=10, n=10, sum;
    sum = add(m, n);
    printf("sum is %d", sum);
    
    // Here:
    // m,n -> Argument
    // a,b -> Parameter
    
    return 0;
}

int add(int a, int b){
    
    return (a+b);
}
