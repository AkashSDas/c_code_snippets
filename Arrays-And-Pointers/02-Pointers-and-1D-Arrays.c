#include <stdio.h>

int fun1(int b[], int len){
    int sum=0, i;
    for(i=0; i<len; i++){
        sum += b[i];
    }
    return sum;
}

int fun2(int *b, int len){
    int sum=0, i;
    for(i=0; i<len; i++){
        sum += *(b+i);
    }
    return sum;
}

int fun3(int *b, int len){
    int sum=0, i;
    for(i=0; i<len; i++){
        sum += *(b++);
    }
    return sum;
}

int main()
{
    int a[] = {1,2,3,4};
    int len = sizeof(a)/sizeof(a[0]);
    
    printf("%d \n", fun1(a, len));
    // Here we are passing the base address of 'a' not the entire array
    // int b[] is working as a pointer
    
    printf("%d \n", fun2(a, len));
    printf("%d \n", fun3(a, len));
    
    return 0;
}
