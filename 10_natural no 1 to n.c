#include <stdio.h>
int main (){
    int sum = 0 , i = 0,n;

    printf("Enter the Number : ");
    scanf("%d",&n);

    while ( i <= n){
        sum = sum + i;
        i++;
    }

    printf ("Sum of first %dth nutural number = %d",n,sum);
    return 0;
}