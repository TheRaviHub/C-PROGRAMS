#include <stdio.h>
int main (){
    int n,i=1,multiple;

    printf("Enter the no.: ");
    scanf("%d",&n);

    printf("Multiple of no.: %d is",n);

    while (i<=10){
        multiple = n*i;
        printf("\n%d*%d=%d",n,i,multiple);   //eg.(n=2) 2 * 1 = 2
        i=i+1;
    }
    return 0;
}