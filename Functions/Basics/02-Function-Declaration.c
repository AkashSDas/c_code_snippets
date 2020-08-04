#include <stdio.h>

int areaofRect(int, int);

int main() {
    
    // **** FUNCTION DECLARATION ****
    // Syntax:
    //  return_type function_name(set_of_inputs);
    
    // Area of Reactangle
    int l=10, b=10;
    int area = areaofRect(l, b);
    printf("%d\n", area);
    
	return 0;
}

// Area of Reactangle
int areaofRect(int length, int breadth){
    int area;
    area = length * breadth;
    return area;
}
