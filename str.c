#include <stdio.h>
#include <string.h>
int main()
{
    char na[100];
    char sc[200];
    
    printf("please enter the name : ");
    scanf("%s",na);
    printf("please enter the school name : ");
    scanf("%s",sc);
    
    printf("I am %s studying in %s school .",na,sc);
    return 0;
    
}
