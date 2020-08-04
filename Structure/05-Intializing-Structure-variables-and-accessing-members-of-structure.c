#include <stdio.h>


// Wrong Way:
// struct abc{
//     int p = 10;
//     int q = 20;
// }

// Right Way:
struct abc{
    int p;
    int q;
};

int main()
{
    // ##### Intializing Structure variables and accessing members of structure ##### //
    
    struct abc x = {10, 20};
    
    // Accessing members of structure
    printf("%d %d", x.p, x.q);

    return 0;
}
