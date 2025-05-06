#include <stdio.h>

int main () {
    float cgpa = 7.5;
    
    if (cgpa >= 9.0) {
        printf("grade: A\n");
    }else if (cgpa >=7.5) {
        printf("grade: B\n");
    }else if (cgpa >= 6.0) {
        printf("grade:C\n");
    }else {
        printf("grade: F\n");
    }
    return 0;
    }
