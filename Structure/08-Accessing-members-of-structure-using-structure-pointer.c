#include <stdio.h>

struct abc{
    int x;
    int y;
};


int main()
{
    // ##### Accessing members of structure using structure pointer ##### //
    
    struct abc a = {0, 1};
    
    // Declaring a struct pointer
    struct abc *ptr = &a;
    // ptr is pointer to some variable of type struct abc
    
    printf("%d %d \n", ptr->x, ptr->y);
    printf("%d %d \n", (*ptr).x, (*ptr).y);
    printf("%d %d \n", (*&a).x, (*&a).y);
    
    // ptr->x is equivalent to (*ptr).x
    // (*ptr).x is also equivalent to (*&a).x

    return 0;
}
