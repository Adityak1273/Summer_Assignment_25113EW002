#include <stdio.h>
int main(){
    int a,n,pro=1;
    printf("Enter the Digit : ");
    scanf("%d",&n);
    while(n>0){
        a=n%10;
        pro=pro*a;
        n=n/10;
    }
    printf("Product of the Digits : %d",pro);
    return 0;
}