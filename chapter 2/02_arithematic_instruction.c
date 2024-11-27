#include <stdio.h>
#include <math.h>
int main()
{
    int a = 7;
    int b = 2;
    printf("the value of a+b is %d\n", a + b);
    printf("the value of a-b is %d\n", a - b);
    printf("the value of a/b is %f\n", a / b);

    printf("the value of a*b is %d\n", a * b);

    // printf("5 when divided by 2 the remainder is  %d \n", 5 % 2); // it throughs remainder 1
    // printf("5 when divided by 2 the remainder is  %d \n",-5%2);//it throughs remainder -1 bcoz numerator sign is considered
    // printf("5 when divided by 2 the remainder is  %d \n",5%-2);//it throughs remainder 1 bcoz only numerator sign is considered

    // printf("the value of 4*5 is %d\n"(4).(5))          wrong will not return 20 bcoz  no operator is assumed to be present
    // printf("the value of 4^5 is %d\n",4^5);      there is no opaerator to perforn exponention in c

    printf("the value of 4^5 is %f", pow(4, 5));

    return 0;
}