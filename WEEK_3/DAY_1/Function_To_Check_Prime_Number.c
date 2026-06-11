#include <stdio.h>
int prime(int n){
    int not_prime=0;
    for(int i=2;i<n;i++){
        if (n%i==0){
            not_prime++;
        }
    }
    if (not_prime==0){
        printf("%d is a Prime Number.",n);
    }
    else{
        printf("%d is not a Prime Number.",n);
    }
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    prime(n);
    return 0;
}