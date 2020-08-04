#include <stdio.h>

int main(void) {
  
  // ## Pointer Addition ## //
   
   int arr[] = {1, 2, 3, 4, 5, 6, 7 ,8, 9, 10}; 
   
   int *p = &arr[0];
   //Gives address of arr[0] element
   
   printf("%d \n",*p);
   //Gives value of 1st element of array
   
   // Adding Integer to the Pointer
   p = p + 3;
   printf("%d \n", *p);
    
    // p = p + 3 is equivalent to &a[3]
    
/////////////////////////////////////////////////////////////////////////////

    // ## Pointer Subtraction ## //
    
    p = p - 3;
    printf("%d \n", *p);
    //The pointer shifts to 1st element
    
    // To find distance between two pointers
    // q - p 
    
    // !!!Note:
    // **** Undefinied Behaviour ****
    
    // Performing arithmetic on pointers which are not pointing to array elements leads to undefinied behavoiur
    // E.g.:
    
    int main(){
        int i = 10;
        int *p = &i;
        printf("%d", *(p+3));
        // Here i is a variable not an array 
        return 0;
    }
    // Here you will get different output everytime
    
    // If two pointers are pointing to different arrays then performing subtraction between them leads to undefinied behavoiur
    // E.g.:
    
    int main(){
        int a[] = {1,2,3,4};
        int b[] = {10,20,30,40};
        int *p = &a[0];
        int *q = &b[0];
        printf("%d", q - p);
        return 0;
    }
    // Different Outputs everytime
    
//////////////////////////////////////////////////////////////////////////////

    // ## Increment & Decrement ## //
    
    // 1. Post Increment
    int main(){
        int a[] = {1,2,3,4,5,6};
        int *p = &a[0];
        printf("%d \n", *p);
        printf("%d \n", *(p++));
        // p++ first the value will be assingned and there will be an increment
        printf("%d \n", *p);
        return 0;
    }
    
    // 2. Pre Increment
    int main(){
        int a[] = {1,2,3,4,5,6};
        int *p = &a[0];
        printf("%d \n", *p);
        printf("%d \n", *(++p));
        printf("%d \n", *p);
        return 0;
    }
    
    // 3.Pre and Post Decrement
    int main(){
        int a[] = {1,2,3,4,5,6};
        int *p = &a[2];
        printf("%d \n", *p);
        printf("%d \n", *(--p));
        printf("%d \n", *p);
        printf("%d \n", *(p--));
        return 0;
    }
    
/////////////////////////////////////////////////////////////////////////////

    // ## Comparing Pointers ## //
    
    // Note:
    // - Use relational operators(<, >, <=, >=) and equality operator(==, !=) to compare pointer
    // - Only possible when both pointers point to same array 
    // - Output depends upon the relative positions of both the pointers
    
    // Example:
    
    int main(){
        int a[] = {1,2,3,4,5,6};
        int *p = &a[3];
        int *q = &a[5];
        printf("%d \n", p<=q); // ===> Output: 1 since TRUE
        printf("%d \n", p>=q); // ===> Output: 0 since FALSE
        q = &a[3];
        printf("%d \n", p==q); // ===> Output: 1 since TRUE
        return 0;
    }

  return 0;
}
