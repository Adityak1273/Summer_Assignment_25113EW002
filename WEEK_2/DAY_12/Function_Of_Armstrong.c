#include <stdio.h>
#include <math.h>
int armstrong(int n){
    int n1=n,count=0,digit=0,add=0;
    while (n1>0){
        count++;
        n1/=10;
    }
    n1=n;
    for(int i=0;i<count;i++){
        digit=n1%10;
        add+=pow(digit,count)+0.5;
        n1/=10;
    }
    if (n==add){
        printf("%d is a Armstrong number.",n);
    }
    else{
        printf("%d is not a Armstrong number.",n);
    }
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    armstrong(n);
    return 0;
}