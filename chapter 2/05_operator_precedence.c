#include <stdio.h>
int main()
{
    int x = 2;
    int y = 3;
    // printf("the value of 3*x-8*y is %d\n", 3*x-8*y); // itr give -60 which is true
    // why it doesnot understand it as 3*(x-8*y) bcoz of operator precedence

    //   priority          operators
    //     1                 *, /, %

    //     2                   +, -

    //     3                     =
   // printf("the value of 8*y / 3*x is %d",  8*y / 3*x); // associativity will come in act
      

    return 0;
}