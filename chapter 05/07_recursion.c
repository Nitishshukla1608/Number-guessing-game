#include <stdio.h>

// int factorial(int x);

// int main (){
//     int n;
//     printf(" enter the number  : ");
//     scanf("%d",&n);
//    int c =  factorial(n);
//     printf("the factorial of %d is %d",n,c);

//  return 0;
// }

// int factorial (int x){
//     if( x== 1 || x == 0)
//         return 1;

//         else {
//             int c = x*factorial(x-1);
//             return c;
//         }
// }

int main()
{
    int n;
    printf(" enter the number  : ");
    scanf("%d", &n);
    // factorial(n);
    printf("the factorial of %d is %d", n, factorial(n)); // yahan par factorial function printf ke andar call ho rahi hai.....
    return 0;
}

int factorial(int x)
{
    printf("here the value of factorial is %d\n", x);    // yahan se ham achhe se dekh sakte hain
    if (x == 1 || x == 0)
        return 1;

    else
    {
        int c = x * factorial(x - 1);                  // yahan par function baar baar call ho rahi hai isi ko to RECURSION kahte hain........
        return c;                                     // yahan par function , c ki value leke return hoga baar baar...........
    }                                                //  aur na return c na lagaaye phir bhi vo function ki value leke hi jaayega joki c hai..........
}