#include <stdio.h>
int sum(int n){
    if(n==0){
        return 0;
    }
    return n%10+sum(n/10);
}
int main(){
    int number;
    printf("Enter the Number : ");
    scanf("%d",&number);
    printf("Sum of the digit %d are : %d",number,sum(number));
    return 0;
}