#include <stdio.h>
#include <math.h>
int main (){
    int  num ,origin ,n=0 ,remainder;
    float result = 0.0;

    printf("Enter the number = ");
    scanf("%d",&num);

    origin = num;

    for ( origin = num ; origin != 0 ; ++n ){
        origin /= 10;
    }

    for ( origin = num ; origin != 0 ; origin /= 10){
        remainder = origin % 10;
        result += pow(remainder, n);
    }

    if ( (int)result == num){
        printf("ITS ARMSTRONG NUMBER\n");
    }
    else{
        printf("ITS NOT A ARMSTRONG NUMBER\n");
    }
    return 0;
}