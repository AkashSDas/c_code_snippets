#include <stdio.h>

int main(void) {
  
  // **** Note: Name of an array can be used as a pointer to the first element is of an array ****
    
    //Eg:
    
    int a[5];
    *a =  10;
    printf("%d %d \n", *a, a[0]);
    
    *(a+1) = 20;
    printf("%d \n", a[1]);
    *(a+2) = 30;
    printf("%d \n", a[2]);
    
    // Conclusion 
    // *(a + i) = a[i]
    
    // Here a is a base address
    
    // Sum of all elements in an array using pointers
    int arr[4] = {1,2,3,4};
    int sum = 0, *p;

    for(p = &arr[0]; p <= &arr[3]; p++){
        sum += *p;

    }
    printf("%d \n", sum);
    // Here p is a base address
    
        
    //Note: 
    // It is true we can use array names as pointers, but assiging a new address to them is not possible
        //int b[] = {1,2,3,4};
        //printf("%p", b++);
        
        // Here b = b + 1
        // We are trying to change base address of the array
        
    // But we can do this 
        int b[] = {1,2,3,4};
        printf("%p \n", b+1);
        //Here we are not trying to assign value to base address
        
    // Alternative of this all is:
        int c[] = {1,2,3,4};
        int *q = c;
        // Assigining a pointer variable to base address
        printf("%d", *(q++));

  return 0;
}
