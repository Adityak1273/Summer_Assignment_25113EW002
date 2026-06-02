#include <stdio.h>
#include <math.h>
int main(){
    int copy,copy2,rem,add=0,add1=0,power=0,power1=0,n;
    printf("Enter the Binary Number : ");
    scanf("%d",&n);
    copy=n;
    while(copy>0){ 
        rem=copy%10;
        add+=rem*pow(2,power);
        power++;
        copy/=10;  
    }
    printf("Binary number of %d to Binary number are : %d",n,add);
    return 0;
}