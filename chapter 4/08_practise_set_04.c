#include <stdio.h>
int main()
{

    // QUESTION NO.1     TABLE banaani hai
    // int n;
    // printf("enter the number whose table you want : ");
    // scanf("%d",&n);

    // for(int i =1;i<=10;i++){
    //     printf("%d\n",n*i);
    // }

    // int n;
    // printf("enter the number whose table you want : ");
    // scanf("%d",&n);
    // int i=1;

    // while(i<=10){
    //     printf("%d\n",n*i);
    //     i++;
    // }

    // QUESTION NO.2   MULTIPLICATION OF 10 IN REVERSE ORDER

    // int i=10;int n = 10;
    // do{
    //     printf(" 10 X %d = %d\n",i,10*i);
    //     i--;
    // }while(i>=1);

    // QUESTION NO.3

    //         TRUE

    // QUESTION NO.5  // SUM OF FIRST 10 NATURAL NUMBERS

    // int sum = 0;
    // for(int i = 1; i<=10;i++){
    //     sum = sum + i;  // sun+=i
    // }
    // printf("  %d  ",sum);

    // question no.6   implementing ques.5 using do and do while loop

    // int i=1, sum = 0;
    // do
    // {                                   USING DO WHILE LOOP

    //     sum = sum + i;
    //      i++;

    // } while (i <= 10);

    // printf("%d", sum);

    // USING WHILE LOOP
    // int i = 1, sum = 0;

    // while(i<=10){
    //     sum = sum + i;
    //     i++;
    // }
    // printf(" %d ", sum);

    // QUESTION NO.7

    // int sum=0,pro;
    // for(int i = 1;i<=10;i++){
    //     pro=8*i;
    //     sum =  sum + pro;

    // }
    // printf("%d",sum);

    // QUESTION NO.8

    // int pro = 1, n;
    // printf("enter the number  :  ");
    // scanf("%d", &n);

    // while (n >= 1)
    // {
    //     pro = pro * n;     //  pro*=n
    //     n--;
    // }
    // printf("%d\n", pro);

    //  OR    OR    OR

    // int i = 10;
    // int pro = 1;
    // for(i=n;i>=1;i--){
    //     pro = pro*i;
    // }
    // printf("%d\n",pro);

    // QUESTION NO.9

    ///  DONE

    //  QUESTION NO.10

    // A prime number (or prime) is a natural number greater than 1 that has no positive divisors other than 1 and itself

    // this is not ther bewst method to solve thi problem
    // int i, n;
    // printf("enter the number : ");
    // scanf("%d", &n);
    // for (int i = 2; i < n; i++)
    // {
    //     if ((n % i) == 0)
    //     {
    //         printf("%d is not an prime number\n", n);
    //         break;
    //     }

        
    // }
    // printf("THANKING YOU");





    int n = 9 ;
    int prime = 1;
//    printf("enter n : ");
//     scanf("%d",&n);
    for(int i=2;i<9;i++){
        if(n%i==0){
            prime=0;
            break;
        
    }
    }
    if(prime==0){
        printf("this is not an prime number");
    }
    else{
        printf("this is a prime number");
    }
    return 0;
}
