#include <stdio.h>

typedef int INTEGER;

// One Way
struct emp{
    char *name;
    int age;
    int salary;
}; 

// Other Way

// struct ep is the old type
typedef struct ep{
    char *name;
    int age;
    int salary;
} ep; 
// Here ep is the new type

int main()
{
    // ###### Structure Types (Using typedef) ####### //
    
    // Syantax: 
    //      typedef existing_data_type new_data_type
    
    // typedef gives freedom to the user by allowing them to create their own types
    
    // 1.
    INTEGER var = 100;
    printf("%d \n", var);
    
    // 2.
    struct emp emp1;
    
    // 3.
    ep ep1;

    return 0;
}
