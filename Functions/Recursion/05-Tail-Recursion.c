#include <stdio.h>

int main()
{
    // **** Tail Recursion ****
    // If the recursion call is its last thing done by the function. There is no need to keep record of the previous state.
    
    fun(3);    

    return 0;
}

void fun(int n)
{
    if(n==0)
        return;
    else
        printf("%d ", n);
    return fun(n-1);
}
