#include <stdio.h>
int main(){
    int n,d=0;
    printf("Enter the Number : ");
    scanf("%d",&n);
    while(n>0){
        if(n%10!=0){
            d=d+1;
        }
        n=n/10;
    }
    printf("Number of Digits in a Number : %d",d);
    return 0;
}