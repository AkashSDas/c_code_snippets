#include <stdio.h>

int main()
{
    // **** No - Tail Recursion ****
    // If the recursion call is not the last thing done by the function. After returning back, there is something left to evaluate
    
    fun(3);    

    return 0;
}

void fun(int n)
{
    if(n==0)
        return;
    fun(n-1);
    printf("%d ", n);
}
