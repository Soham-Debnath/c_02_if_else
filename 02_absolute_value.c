#include <stdio.h>
int main(){
    int n;
    printf("enter your number n= ");
    scanf("%d",&n);
    
    if(n<0){
        int m;
        m=n*-1;
        printf("The abosulte value of %d is = %d",n,m);
    }
    else{
        
        printf("The abosulte value of %d is = %d",n,n);
    }
    return 0;
}