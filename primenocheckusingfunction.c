#include <stdio.h>
int  primeCheck (){
    int n;
    printf("ENTER THE NUMBER = ");
    scanf("%d",&n);

    if ( n <= 1 ){
        printf("IT IS NOT PRIME NUMBER ");
    }
    else if ( n == 2 ){
        printf("IT IS PRIME NUMBER ");
    }
    else if ( n > 2){
        for ( int i = 2 ; i < n ; i++){
            if( n%i == 0 ){
                printf("IT IS NOT A PRIME NUMBER\n");
                return 0;
            }
        }
        printf("IT IS A PRIME NO.\n");
    }
    return 0;
}
int main(){
    primeCheck();
    primeCheck();
    primeCheck();

    return 0;
}