#include <stdio.h>
#include <math.h>
int reverse(int n){
    if(n==0){
        return 0;
    }
    int power=n,add=-1;
    while (power>0){
        add++;
        power/=10;
    }
    
    return (n%10)*pow(10,add)+reverse(n/10);
}
int main(){
    int number;
    printf("Enter the Number : ");
    scanf("%d",&number);
    printf("Reverse of the number %d is : %d",number,reverse(number));
    return 0;
}