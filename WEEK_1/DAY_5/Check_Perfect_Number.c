#include <stdio.h>
int main(){
    int n,add=1;
    printf("Enter the Number : ");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0){
            add=add+i;
        }
    }
    if(add==n){
        printf("%d is a perfect number.",n);
    }
    else if(n==0){
        printf("%d is not a perfect number.",n);
    }
    else{
        printf("%d is not a perfect number.",n);
    }
    return 0;
}