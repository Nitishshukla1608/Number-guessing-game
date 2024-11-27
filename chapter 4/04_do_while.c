#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("enyer n : ");
    scanf("%d", &n);

    do
    {
        printf(" %d\n", i); // do while loop executes at leat one time bcoz condition is checked after  execution
        i++;
    } while (i<=n);
    return 0;
}
