#include <stdio.h>
#include <string.h>
#define ops 4

int add(int a, int b);

// 5.
float sum(float a, float b){ return a+b; }
float sub(float a, float b){ return a-b; }
float mult(float a, float b){ return a*b; }
float divi(float a, float b){ return a/b; }

int main(){
    
    // ###### Function Pointers ####### //
    
    // Function Pointers are like normal pointers but they have the capability to point to a function

// #####################################################################

    // 1. How to declare a pointer to an array ?
    
    int *pointer1[10];
    // This is wrong way 
    // Since precedence of [] is higher than *
    // Therefore pointer1 is an array os 10 pointers pointing to integers
    
    int (*pointer2)[10];
    // This is wright way
    // Here pointer2 is a pointer pointing to array containig 10 integers
    
// #####################################################################    
    
    // 2. How to declare a pointer to a function
    
    // Prototype:  int (*ptr)(int, int);
    
    // ptr is a pointer pointing to function containig two integers arguments and it return an integer
    
// #####################################################################

    // 3. Assinging the address of a function to a function pointer

    // int (*ptr)(int, int) = &add;
    
    // OR
    
    // int (*ptr)(int, int)
    // ptr = &add;
    
// #####################################################################

    // 4. Using the function as pointer
    
    //int result;
    //int (*ptr)(int, int) = &add;
    //result = *ptr(10, 20);
    //printf("%d \n", result);
    
    // OR
    
    int result;
    int (*ptr)(int, int) = add;
    result = ptr(10, 20);
    printf("%d \n", result);
    // name of the function reprents the initial address of that function
    
// #####################################################################

    // 5. Application of Function Pointers 
    
    // Suppose we want to call a function named func() at a certain point in time in our code.
    
    // Here user will decide which function is to be called in runtime
    
    // Example calculator:

        float (*ptr2func[ops])(float, float) = {sum, sub, mult, divi};
        int choice;
        float a, b;
        printf("Enter your choice: 0 for sum, 1 for sub, 2 for mult, 3 for divi ");
        scanf("%d", &choice);
        printf("Enter the two numbers: \n");
        scanf("%f %f", &a, &b);
        printf("%f", ptr2func[choice](a, b));
    
    return 0;
}

int add(int a, int b){
    return a+b;
}
