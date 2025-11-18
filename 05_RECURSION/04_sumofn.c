#include <stdio.h>
int sum(int n){
    if (n==1 || n==0) return n;
    int s = n + sum(n-1);
    return s;
}
int main(){
    int n;
    printf("Enter the number = ");
    scanf("%d",&n);
    int s = sum (n);
    printf("Sum from 1 to %d = %d",n,s);
    return 0;
}