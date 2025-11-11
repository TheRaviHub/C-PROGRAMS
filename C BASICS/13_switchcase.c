/*to find thw area of various shapes by using switchcase and break*/

#include <stdio.h>
#include <math.h>
int main(){
    int x,l,b,bs,h,r;
    float AOT,AOC,AOR;

    printf("ENTER 1 FOR AREA OF TRIANGLE\n");
    printf("ENTER 2 FOR AREA OF CIRCLE\n");
    printf("ENTER 3 FOR AREA OF RECTANGLE\n");
    printf("ENTER YOUR CHOICE :");
    scanf("%d", &x);

    //  if (scanf("%d", &x) != 1) { // Check if scanf successfully read an integer
    //     printf("Invalid Choice \n");
    //     return 1; // Indicate an error
    // }


    switch(x){
        case 1:
        printf("ENTER THE VALUE OF BASE AND HEIGHT OF TRIANGLE = ");
        scanf("%d%d",&bs,&h);
        AOT = 0.5*bs*h;
        printf("THE AREA OF TRIANGLE = %f\n",AOT);
        break;

        case 2:
        printf("ENTER THE VALUE OF RADIUS OF CIRCLE = ");
        scanf("%d",&r);
        AOC = 3.14*r*r;
        printf("THE AREA OF CIRCLE = %f\n",AOC);
        break;

        case 3:
        printf("ENTER THE VALUE OF LENGTH AND BREADTH OF RECTANGLE = ");
        scanf("%d%d",&l,&b);
        AOR = l*b;
        printf("THE AREA OF RECTANGLE = %f\n",AOR);
        break;

        default :
        printf("INVALID CHOICE");
        break;
    }
    return 0;
}