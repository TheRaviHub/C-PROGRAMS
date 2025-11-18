#include <stdio.h>
int powerRaised(int a, int b){
    if(b==0) return 1;
    int result = a * powerRaised(a,b-1);   //recursion 
    return result;
}
int main(){
    int a,b;
    printf("Enter the base = ");
    scanf("%d",&a);  //a = base

    printf("Enter the power = ");
    scanf("%d",&b);   //b = power

    int result = powerRaised(a,b);   //function call
    printf("%d to the power %d = %d",a,b,result);   //output
}
