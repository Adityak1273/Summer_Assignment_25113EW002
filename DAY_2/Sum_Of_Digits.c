#include <stdio.h>
int main(){
    int a,n,sum=0;
    printf("Enter the Digit : ");
    scanf("%d",&n);
    while(n>0){
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    printf("Sum of the Digits : %d",sum);
    return 0;
}