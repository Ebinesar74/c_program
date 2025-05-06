#include <stdio.h>

int main () {
    int age = 25;
    int haslicens = 1;
    
    if (age >= 18) {
        if(haslicens) {
            printf("you can drive .\n");
        } else{
            printf("you need a licence to drive.\n");
        }
        } else{
            printf("you are too young to rive.\n");
        }
        return 0;
        }
    
