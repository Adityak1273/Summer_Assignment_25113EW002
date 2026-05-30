#include <stdio.h>
#include <math.h>
int main(){
    int n,add=0,a=0,b=0,c=0;
    printf("Enter the Number : ");
    scanf("%d",&n);
    int next=n,next1=n;
    while(next>0){
        next/=10;
        add=add+1;

    }
    while(next1>0){
        a=next1%10;
        b=(int)(pow(a,add)+0.5);
        c=c+b;
        next1=next1/10;
    }
    if(n==c){
        printf("%d is a Armstrong Number.",n);
    }
    else{
        printf("%d is not a Armstrong Number.",n);
    }
    return 0;
}