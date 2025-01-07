// and = &&
#include <stdio.h>
int main (){
    int n;
    printf("enter a threed digit number = ");
    scanf("%d",&n);
    if(99<n && n<1000){
        printf("%d is a three digit number",n);
    }
    else{
        printf("%d is not a three digit number",n);
    }
    return 0;
}

