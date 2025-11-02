#include <stdio.h>
int main(){
    int income,tax;
    printf("Enter your annual income = ");
    scanf("%d",&income);

    if ( income <= 250000 ){
        tax = 0;
    }
    else if ( income <= 500000 ){
        tax = ( income - 250000)*0.05; //5% tax on income above 250000
    }
    else if ( income <= 1000000 ){
        tax = ( 250000*0.05 ) + ( income - 500000)*0.2; //20% tax on income above 500000
    }
    else {
        tax = ( 250000*0.05 ) + ( 500000*0.2 ) + ( income - 1000000 )*0.3;
    }

    printf ("Income = %d\n",income);
    printf("Tax to be paid = %d\n",tax);
    return 0;
}