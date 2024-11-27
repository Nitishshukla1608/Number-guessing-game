# include <stdio.h>

void change (int b);


int main (){
    int b = 34;               // this b is of main function
    printf("before calling the value of b is %d\n",b);
    change(b);
    printf("after calling the value of b is %d\n",b);
return 0;
}
void change (int b){
     b = 77;         // this b is of change function
}

