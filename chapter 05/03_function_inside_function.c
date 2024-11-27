#include <stdio.h>

void goodmorning();
void goodafternoon();
void goodnight();

int main()
{
    goodmorning();

    return 0;
}

void goodmorning()
{
    printf("good morning\n");
    goodafternoon(); // yahan par goodmorning ne goodafternoon ko call kiya hai
}
void goodafternoon()
{
    printf("good afternoon\n");
    goodnight(); // yahan par goodafternoon ne goodnight ko call kiya hai
}
void goodnight()
{
    printf("good night\n"); // aur yahan par good night ko define kiya gaya hai
}

//   yahan ke baad program direct return 0 par jaayega jo ki int main mein execute kiya gaya hai  aur program wahin se end hota hai
// int ne goodmorning ko call kiya  uar khud so gaya aur phir goodmorning ne goodafternoon ko call kiya aur usne goodninght ko call kiya hai
//  aur  aakhir mein laut kar return 0 initiliaze hua  