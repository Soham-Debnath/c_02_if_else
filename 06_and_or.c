// or == ||
#include <stdio.h>
int main(){
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    if(n%5==0 ||n%3==0){ //&& dile or er jaigai and hoto
        printf("number %d is a multiple of 5 or 3",n);
    }
    else{
        printf("number %d is not a multiple of 5 or 3",n);
    }
    return 0;
}