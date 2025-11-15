#include <stdio.h>
int main (){
    int arr[5] = {2,4,6,8,0};  //size of the array is 5

    //to print the value of the arrays we will use loop
    
    //index start from 0 to size-1
    //eg:- here indeces = 0 to 4 
    
    for(int i = 0 ; i <= 4 ; i++){
        printf("arr[%d] = %d \n",i,arr[i]);
    }
    return 0;
}