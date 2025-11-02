#include <stdio.h>
int main(){
    int e,s,m,p;

    printf("Enter marks of 3 subjects : ");
    scanf("%d%d%d",&e,&s,&m);

    p = (e + s + m )/3;

    if ( (p >= 40) && e >= 33 && s >= 33  && m >= 33){
        printf("PASSED");
    }
    else{
        printf("FAILED");
    }
    return 0;
}