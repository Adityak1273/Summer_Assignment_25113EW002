#include <stdio.h>
int main(){
    int rev=0,n,a;
    printf("Enter the Number : ");
    scanf("%d",&n);
    while(n>0){
        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }
    printf("Reverse of the Number : %d",rev);
    return 0;
}
