#include <stdio.h>

int main() {
    int m, n;

    //taking matrix size
    printf("Enter the no of row = ");
    scanf("%d",&m);

    printf("Enter the no of column = ");
    scanf("%d",&n);

    int arr[m][n];

    //input elements
    printf("Enter the elements of the matrix = ");
    for ( int i = 0 ; i < m ; i++){
        for ( int j = 0 ; j < n ; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    //find maximum element
    int max = arr[0][0];

    for ( int i = 0 ; i < m ; i++ ){
        for ( int j = 0 ; j < n ; j++){
            if ( arr [i][j] > max ){
                max = arr [i][j];
            }
        }
    }

    //find minimum element
    int min = arr[0][0];

    for ( int i = 0 ; i < m ; i++ ){
        for ( int j = 0 ; j < n ; j++){
            if ( min > arr [i][j] ){
                min = arr [i][j];
            }
        }
    }
    printf("Maximum element in the matrix  = %d\n",max);
    printf("Minimum element in the matrix  = %d\n",min);
    return 0;
}