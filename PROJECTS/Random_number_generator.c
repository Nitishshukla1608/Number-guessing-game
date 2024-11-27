#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num;
    srand(time(0));
    num = rand() % 10;
     printf("%d\n", num);
     return 0;
}