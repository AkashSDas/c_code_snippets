#include <stdio.h>

// Creating your own input

int input(char str[], int n){
    int ch, i=0;
    while((ch=getchar()) != '\n')
    // getchar() read only one character at a time and returns an interger equivalent to ASCII code of the character
        if(i<n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}

int main(void) {
  
  // #### getchar() #### //
    
    char str[100];
    int n = input(str, 5);
    printf("%d %s", n, str);

  return 0;
}
