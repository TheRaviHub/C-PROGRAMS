#include <stdio.h>
void count(int n){
    if(n==0) return ;
    count(n-1);
    printf("%d\n",n);
    return ;
}
int main(){
    int n;
    printf("Enter the number = ");
    scanf("%d",&n);
    count (n);
    return 0;
}