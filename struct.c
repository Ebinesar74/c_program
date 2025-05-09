#include <stdio.h>
struct student
{
    int roll;
    char name[30];
    float mark;
};
int main() 
{
    struct student a={12,"ajith",99.92};
    printf("int roll=%d \n,char name=%s\n,float mark=%.2f\n",a.roll,a.name,a.mark);
    return 0; 
}
