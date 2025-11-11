//sum of two using function

#include <stdio.h> 

//function declaration
int sum (){
    
    int num1 , num2 ;
    printf("Enter the first number = ");
    scanf("%d",&num1);
    
    printf("Enter the second number = ");
    scanf("%d",&num2);
    
    printf("THE SUM OF %d AND %d = %d\n",num1,num2,num1 + num2);
    
    return 0 ;
}

int main(){

    sum();  //function call
    sum();  //function call
    sum();  //function call

    return 0;
}
