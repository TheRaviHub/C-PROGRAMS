//to check palindrome numbers means number = reversednum

#include <stdio.h>
int main (){
    int originalnum, num, reversednum = 0, remainder;

    printf("Enter the num.:");
    scanf("%d",&num );
    originalnum = num;

    while(num != 0){
        remainder = num  % 10;   // to get last digit
        reversednum = reversednum*10 + remainder;
        num = num /10;    // to remove last digit return in integer form
    }

    printf("\nOriginal num=%d",originalnum);
    printf("\nReversed num=%d",reversednum);

    if ( originalnum == reversednum ){
        printf("\nNum is palindrome");
    } 
    else {
        printf("\nNum is not palindrome");
    }
    return 0;
}