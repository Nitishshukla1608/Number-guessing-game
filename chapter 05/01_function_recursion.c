#include <stdio.h>
// GENERAL STRUCTURE OF AN FUNCTION NAMED AS DISPLAY----
void display(); // function prototype

int main()                          // yahin se hamesa c program execute hota hai aur jab display function calll hoga to ye sleep mode main chala jaayega
{
    printf("initializing display function and the int function is now going to sleep\n");
    display();                    // function call 
                                 // jahan se display function call (initiliaze) hogi wahin se int function so jaayega
    printf("displpay function finished its work and now the int function will awake and do its work\n"); 
                               // ab yahan se int function apna kaam karega
    return 0;
}

void display()
{
                         // Execution of program   or function definition
    printf("this is done by display function\n");
}
