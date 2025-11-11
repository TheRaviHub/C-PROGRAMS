/*sum of individual digits of a positive integer */

#include <stdio.h>
int main (){
    int n,digit,sum;

    printf("Enter the number = ");
    scanf("%d",&n);

    for ( sum = 0; n != 0 ; n = n/10){
        digit = n % 10; //to get the last digit 
        sum = sum + digit; //to get the sum of individual nos.
    }

    printf("Sum of the digits = %d\n",sum);
    return 0;
}