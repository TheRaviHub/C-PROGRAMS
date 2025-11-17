#include <stdio.h>
int main(){
    int arr[9];  //size = 09
    for (int i=0 ; i<=8 ; i++){
        scanf("%d",&arr[i]);  //input integers values not float or any character
    }
     for (int i=0 ; i<=8 ; i++){
        printf("arr[%d] = %d\n",i,arr[i]);  //printing the values
    }
    return 0;
}