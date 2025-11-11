#include <stdio.h>
int main(){
    float c ,f;

    printf("Enter the value of celsius = ");
    scanf("%f",&c);    //user input value of c

    // conversion celsius into fahrenheit

    f = (c*1.8)+32 ;

    printf ("So value in fahrenheit = %f",f);
    return 0;
}