/*calculate the area of triangle*/

#include <stdio.h>
int main() {
    int H,B;
    float area;

    printf("Enter the Height:");
    scanf("%d",&H);

    printf("Enter the Base:");
    scanf("%d",&B);

/*formula of area of trinagle*/
    area = (H*B)/2;
    printf("Area = %f",area);
    return 0;

}