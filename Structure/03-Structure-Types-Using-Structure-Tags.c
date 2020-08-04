#include <stdio.h>

struct {
    char *name;
    int age;
    int salary;
} emp1, emp2;


// Declaraing Structure in local scope
int manager(){
    struct {
        char *name;
        int age;
        int salary;
    } manager;
    
    manager.age = 27;
    
    if(manager.age > 30)
        manager.salary = 450000;
    else
        manager.salary = 55000;
    
    return manager.salary;
}

struct employee{
    char *name;
    int age;
    int salary;
}; 

int mngr(){
    struct employee mngr;
    
    mngr.age = 27;
    if(mngr.age > 30)
        mngr.salary = 450000;
    else
        mngr.salary = 55000;
    
    return mngr.salary;
}

int main()
{
    // ###### Structure Types (Using Structure Tags) ####### //
    
    // Structure tag is used to identify a particular kind of structure
    
    printf("Enter the salary of employee1: ");
    scanf("%d", &emp1.salary);
    printf("Enter the salary of employee2: ");
    scanf("%d", &emp2.salary);
    printf("Employee 1 salary is: %d\n", emp1.salary);
    printf("Employee 2 salary is: %d\n", emp2.salary);
    printf("Manager's salary is %d \n", manager());

    // Without structure type we have to define structure again and again, for employee's and manager
    
    struct employee ep1;
    struct employee ep2;
    
    printf("Enter the salary of employee1: ");
    scanf("%d", &ep1.salary);
    printf("Enter the salary of employee2: ");
    scanf("%d", &ep2.salary);
    printf("Employee 1 salary is: %d\n", ep1.salary);
    printf("Employee 2 salary is: %d\n", ep2.salary);
    printf("Manager's salary is %d", mngr());
    

    return 0;
}
