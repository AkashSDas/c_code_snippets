#include <stdio.h>

struct car {
    int year;
    int quantity;
};


int main()
{
    // ##### Declaring an Array of Structure ##### //
    
    // Instead of declaring multiple variables, we can also declare an array of structure in which each element of the array will represent a structure variable
    
    struct car c[2];
    int i;
    
    for(i=0; i<2; i++){
        printf("\nEnter the car %d year: ", i+1);
        scanf("%d", &c[i].year);
        printf("\nEnter the car %d quantity: ", i+1);
        scanf("%d", &c[i].quantity);
    }
    
    for(i=0; i<2; i++){
        printf("Year of car %d is %d \n", i+1, c[i].year);
        printf("Quantity of car %d is %d \n", i+1, c[i].quantity);
    }
    

    return 0;
}
