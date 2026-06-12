#include <stdio.h>
int palindorme(int n){
    int digit=0,rev=0,n1=n;
    while (n1>0){
        digit=n1%10;
        rev=rev*10+digit;
        n1/=10;
    }
    if (n==rev){
        printf("%d is a palindrome.",n);
    }
    else{
        printf("%d is not a palindrome.",n);
    }
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    palindorme(n);
    return 0;
}