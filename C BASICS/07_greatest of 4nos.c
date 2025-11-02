#include <stdio.h>
int main (){
    int num1,num2,num3,num4,greatest;

    printf("Enter the first no.: ");
    scanf("%d",&num1);
    printf("Enter the second no.: ");
    scanf("%d",&num2);
    printf("Enter the third no.: ");
    scanf("%d",&num3);
    printf("Enter the fourth no.: ");
    scanf("%d",&num4);

    greatest = num1;

    if ( num2 > greatest ){
        greatest = num2 ;
    }

    if ( num3 > greatest ){
        greatest = num3 ;
    }

    if ( num4 > greatest ){
        greatest = num4 ;
    }
    printf("GREATEST NO. = %d",greatest);
    return 0;
}