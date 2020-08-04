#include <stdio.h>

int main()
{
    // **** Static Functions  ****
    
    // Functions are by deafault global
    // This means if we want to access the function outside from the file where it is declared we can access it easily
    // To restrict that access we make use of 'static' keyword
    
    printf("Sum is %d", func(2, 3));
    
    // Resues of same function in another file is possible
    
    return 0;
}

static int func(int a, int b){
    return (a+b);
}
