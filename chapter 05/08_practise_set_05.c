#include <stdio.h>

//  QUESTION NO.1

//  int avg(int a,int b,int c);

//  int main () {
//   int a,b,c;
//   printf("enter the number : ");
//   scanf("%d",&a);
//  printf("enter the number : ");
//   scanf("%d",&b);
//    printf("enter the number : ");
//   scanf("%d",&c);

//    int p = avg(a,b,c);
//   printf("the average is %d",p);
//   return 0 ;
//  }
//  int avg(int a , int b ,  int c){
//   int q = (a+b+c)/3;
//  return p;
// }

//  QUESTIOMN NO.2

// int temp(int c);

//  int main () {
//   int a,b,c;
//   printf("enter the temperature in celcius : ");
//   scanf("%d",&c);
//   int f = temp(c);
//   printf("the temperature in farenhiote is %d",f);
//   return 0 ;
//  }
//  int  temp( int c){
//   int f = (9/5*c) + 32;
//   // reeturn f;
//  }

// QUESTION NO.3

// int attract(int m);

// int main()
// {
//   int m;
//   printf("enter the mass : ");
//   scanf("%d", &m);
//   int f = attract(m);
//   printf("the force of attraction is :  %d", f);
// }

// int attract(int m)
// {
// int  p = m * 9.8;     // yahan par 117*9.8 = 117.6 hota hai lekin uska int p  mein decrement ho jaayega aur p = 117 ho jaayega
//   return p;
// }

//   QUESTION NO.5

int swap(int a, int b);
int main()
{
    int a;
    int b;
    printf("enter the number : ");
    scanf("%d", &a);
    printf("enter the number : ");
    scanf("%d", &b);
    printf("numbers are :  %d , %d\n", a, b);

    swap(a, b);
    printf("  after swapping the numbers :  %d , %d", a, b);

    return 0;
}

int swap(int a, int b)
{
    int c;
    c = a;
    a = b;
    b = c;
    return 1 ;
}
