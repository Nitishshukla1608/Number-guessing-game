#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, inum;
    srand(time(0));
    num = rand() % 10;
     printf("%d\n", num);
    for (int i = 1; i <= 1000; i++)
    {
        printf("OHH!! WOW YOUR GAME STARTS NOW.......\n");
        printf("PLEASE ENETER THE NUMBER between 1 to 10 : ");
        scanf("%d", &inum);

        if (inum < num)
        {
            printf(" THE VALUE YOU ENTERED IS LESS THAN THE GENERATED VALUE PLEASE ENTER THE GREATER VALUE...\n");
            continue;
        }

        else if (inum > num)
        {
            printf(" THE VALUE YOU ENTERED IS MORE THAN THE GENERATED VALUE PLEASE ENTER THE SMALL VALUE...\n");
            continue;
        }

        else if (inum == num)
        {
            printf(" THE VALUE YOU ENTERED IS EQUAL TO THE GENERATED VALUE ...\n");
            printf(" YOU WINNED THE MATCH IN %d ATTEMPTS ,YOUR REWARD IS NOTHING FROM MYSIDE...\n", i);
        }
        break;
    }

    return 0;
}