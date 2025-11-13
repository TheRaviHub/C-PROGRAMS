#include <stdio.h>
int main (){
    int n,count,i ;

    printf("prime nos. from 1 to ");
    scanf("%d",&n);

    for ( i = 1 ; i <= n ; i++){
        count = 0;
        for ( int j = 1 ; j <= i ; j++ ){
            if( i % j == 0){
                count++;
            }
        }
        if (count == 2){
            printf("%d\n",i);
        }
    }
    return 0;
}