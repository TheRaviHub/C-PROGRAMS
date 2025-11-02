#include <stdio.h>
int main (){

    //area of circle = 3.14*(r*r)
    
    int r=4;
    float  area1;
    area1 = 3.14 * (r*r);
    printf("Area of a circle = %.2f", area1);  //%.2d for only 2 digit after dicimal
    

    //area of  cyclinder = 3.14*(r*r)*h

    int h = 10;
    float area2;
    area2 = area1*h;
    printf("Area of cylinder = %.2f", area2);

    return 0;
}