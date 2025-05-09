#include <stdio.h>
union student
{
    int roll;
    char name[30];
    float mark;
};
int main() 
{
    union student a;
    a.roll=12;
    printf("int roll=%d \n",a.roll);
    a.mark=99.92;
    printf("float mark=%.2f\n",a.mark);
    return 0; 
}
