#include <stdio.h>
int main()
{
    //     int a;
    //     printf("enter a  : ");

    //     scanf("%d", &a);
    //     // int a = 12;
    //     while (a > 10)

    //     {
    //         printf("%d\n", a);
    //         a++;
    //     }
    //     // if  the value entered is less than 10 then the code ends at the time
    //     // but when the value antered us more than 10 the loop bcoms the infinite loop

    // quick quiz
    // printing numbers from 10 to 20 including 10 and 20 by intilizing the variable to zero

    // METHOD 1

    int i = 0;
    while (i <= 20)
    {
        if (i >= 10)
        {
            printf("%d\n", i);
        }
        i++;
    }

    // METHOD 2

    // int i = 10; // but here initiliazing is not from zero
    // while (i >= 10 && i <= 20)
    // {
    //     printf("%d\n", i);
    //     i++;
    // }

    // METHOD 3
    // isme doosri tarah kiya hai do loop banaake agar aisi (i >= 10 && i <= 20) condition se banega to  aise hi banega
    // aise hi banega kyunko yahan p value 10 tak jaa nahi rahi thi
    int a;
    int i = 0;
    for (a = 0; a <= 10; a++)
    {
        i = a;
    }
    while (i >= 10 && i <= 20)

    {
        printf("%d\n", i);
        i++; 
    }

    return 0;
}