#include <stdio.h>
int main()
{
    int a;
    printf("enter a ");
    scanf("%d", &a);

    (a < 5) ? printf("a is less than 5") : printf("a is  more than 5");
    //one liner conditional operator
    return 0;
}