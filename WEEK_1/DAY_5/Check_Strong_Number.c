#include <stdio.h>
int main(){
    int n,count=0,add=0,fact=1,strong=0;
    printf("Enter the Number : ");
    scanf("%d",&n);
    int copy=n,copy_1=n;
    while(copy>0){
        count++;
        copy/=10;
    }
    while(copy_1>0){
        add=copy_1%10;
        for(int j=1;j<=add;j++){
            fact*=j;
        }
        strong+=fact;
        fact=1;
        copy_1/=10;
    }
    if(strong==n){
        printf("%d is a Strong Number.",n);
    }
    else{
        printf("%d is not a Strong Number.",n);
    }
    return 0;
}