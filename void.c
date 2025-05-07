#include <stdio.h>

//Function declaration
int rum(int a, int b);
void greet();
void printresult(int result);
int main() {
    int num1 =10,num2 =20;
    
    greet();  
    
    int sum = rum(num1 , num2);
    printresult(sum);
    
    return 0;
}
int rum(int a, int b) {
    return a % b;
}

void greet() {
    printf("Welcome to the function Demo program!\n ");
}
void printresult(sum) {
    printf("%d",sum);
}
