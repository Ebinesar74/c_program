#include <stdio.h>

int main () {
    int system= 28;
    
    switch(system) {
        case 30:
        printf("second row second system\n");
        break;
        case 20:
        printf("thrid row thired system\n");
        break;
        case 10:
        printf("first row first system\n");
        break;
        default:
        printf("Invalid system id\n");
    }
    return 0;
}
