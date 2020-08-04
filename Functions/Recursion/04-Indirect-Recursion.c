#include <stdio.h>

int main()
{
    
    // **** Indirect Recursion **** //
    // A function (let say fun) is called indirect recursive if it calls another function (let say fun2) and func2 calls fun directly or indirectly
    
    // Structure:
    
    fun(){
        //some code
        fun2();
        //some code
    }
    
    fun2(){
        //some code
        fun();
        //some code
    }
    
    return 0;
}
