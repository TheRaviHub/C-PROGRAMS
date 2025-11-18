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
<<<<<<< HEAD
}
=======
}
>>>>>>> 9c54f1e0638566a7a26177f66e46f65de9d4bedd
