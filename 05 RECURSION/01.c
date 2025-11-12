#include <stdio.h>
int factorial ( int n ){
    if(n==0 || n==1) return 1;
    int fac;
    fac = n*factorial(n-1);
    return fac;
}
int main(){
    int n;
    printf("Enter the number = ");
    scanf("%d",&n);
    int fac = factorial(n);
    printf("Factorial of %d = %d",n, fac);
    return 0;
}
