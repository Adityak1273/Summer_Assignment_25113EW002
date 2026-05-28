#include <stdio.h>
int main(){
    int rev=0,n,a;
    printf("Enter the Number to check it's Palindrome or Not : ");
    scanf("%d",&n);
    int b=n;
    while(b>0){
        a=b%10;
        rev=rev*10+a;
        b=b/10;
    }
    if(rev==n){
        printf("%d",n);
        printf(" is a Palindrome.");
    }

    else if(rev!=n){
        printf("%d",n);
        printf(" is not a Palindrome.");
    }
    return 0;
}
