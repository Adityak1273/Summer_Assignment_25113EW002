#include <stdio.h>
int main(){
    int n,not_prime=0,copy,factor=1;

    printf("Enter the Number : ");
    scanf("%d",&n);

    copy=n;

    for(int i=2;i<copy;i++){
        if(copy%i==0){

            for(int j=2;j<i;j++){
                if(i%j==0){
                    not_prime=1;
                    break;
                }
            }

            if(not_prime!=1){
                factor=i;
            }

            not_prime=0;
        }
    }

    printf("Largest prime factor of %d is : %d",n,factor);

    return 0;
}