# include <stdio.h>
// sum is the function which takes input integer a and b and returns an integer form here
// int sum(int a , int b);  // function prototype declaration


// int main () {
//    int c;
    
// c = sum(2,5);   // function call 
// printf("the value of c is %d",c);
// return 0;
// }

// int sum( int a , int b){       
//  int    c = a+b;              // yahan pe function ki definition ki likhi hai
//   //  return result;
// }






int sum(int a , int b);  // function prototype declaration


int main () {
   int c;
    
c = sum(2,15);   // function call 
printf("the value of c is %d",c);
return 0;
}


int sum( int a , int b){          // yahan pe function ki definition  likhi hai
 int  p = a+b;            // yahn par jo output aayega wahi function ka execution result aayega   // aur ayah par p ki jagah jaahe jo likh do value a+b ki hi jaayegi 
   return p  ;          
}



