//to reverse any numbers

#include <stdio.h>
int main (){
    int n,reverse = 0,digit;

    printf("Enter the num.:");
    scanf("%d",&n);

    while(n!= 0){

        digit = n % 10;   // to get last digit
        reverse = reverse*10 + digit;
        n=n/10;    // to remove last digit return in integer form
    }

    printf("Reverse = %d",reverse);
    return 0;
}