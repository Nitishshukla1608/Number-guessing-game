#include <stdio.h>
int main()
{
    int l, b;
    printf("enter thr length\n ");
    scanf("%d", &l);
    printf("enter thr breadth\n ");
    scanf("%d", &b);
    int area = l * b;
    printf("the area is %d", area);

    int r, h;
    float pi = 3.14;
    printf("enter the radiuua ");
    scanf("%d", &r);
    printf("enter the height ");
    scanf("%d", &h);
    printf("the area of the circle is %f\n", r * r * pi);
    printf("the volume of the cylinder is %f\n", pi * r * r * h);

    int celcius;
    printf("enter the temp in celcius ");
    scanf("%d", &celcius);
    float far = (celcius * 9 / 5) + 32;
    printf("the temp in ferenhite is %f\n", far);

    int p, r, t;
    printf("enter the principle amount \n");
    scanf("%d", &p);
    printf("enter the percent rate\n ");
    scanf("%d", &r);
    printf("enter the time \n");
    scanf("%d", &t);
int i = (p * r * t)/100;
    printf("the interest is %d\n", i);
    printf("the total; amount to be returnad is %d\n", p + i);

    return 0;
}