
#include<stdio.h>
int main(){
    int n;
    printf("enter your number n= ");
    scanf("%d",&n);
    if(n%2==0){
        printf("%d is even number",n);
    }   
    else{
        printf("%d is a odd number",n);
    }
    return 0;
}