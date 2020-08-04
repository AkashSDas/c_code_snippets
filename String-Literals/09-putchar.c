#include <stdio.h>

int main()
{
    // #### putchar #### //
    
    // putchar: It accepts an integer argument(which represents a character it wants to display) and returns an integer representing the character written on the screen.
    
    // Prototype: int purchar(int ch)
    
    // I can also write it as : char putchar(char ch)
    // We pass char(character) by using char or int(ASCII code) using int
    
    int ch;
    for(ch = 'A'; ch <= 'Z'; ch++){
        putchar(ch);
    }

    printf("\n");
    
    for(ch = 'a'; ch <= 'z'; ch++){
        putchar(ch);
    }
    
    printf("\n");
    
    for(ch = '1'; ch <= '9'; ch++){
        putchar(ch);
    }

    return 0;
}
