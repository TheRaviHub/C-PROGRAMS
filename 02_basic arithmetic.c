/*calculate sum difference product and quotient of two no.*/

#include <stdio.h>

int main() {
    int a,b,s,d,p,q;
    
    a = 6;
    b = 2;

    s = a + b;   // sum
    d = a - b;   // difference
    p = a * b;   // product
    q = a / b;   // quotient

    printf("Sum = %d\nDifference = %d\nProduct = %d\nQuotient = %d\n", s, d, p, q);
    
    return 0;
}