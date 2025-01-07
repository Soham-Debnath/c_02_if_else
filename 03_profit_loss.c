#include<stdio.h>
int main(){
    int cp,sp,profit,loss;
    printf("enter cost price = ");
    scanf("%d",&cp);
    printf("enter selling price = ");
    scanf("%d",&sp);
    if(cp<sp){
        int profit=sp-cp;
        printf("you have a profit of = %d ",profit);
    }
    else{
        int loss=cp-sp;
        printf("you have a loss of = %d ",loss);
    }
    
    return 0;
}