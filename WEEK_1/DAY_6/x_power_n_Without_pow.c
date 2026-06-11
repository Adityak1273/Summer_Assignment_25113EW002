#include <stdio.h>
int main(){
    int n,power,copy,result=1;
    printf("Enter the Number : ");
    scanf("%d",&n);
    copy=n;
    printf("Enter the power : ");
    scanf("%d",&power);
    for(int i=1;i<=power;i++){
        result=result*copy;
    }
    
    printf("Power of %d are : %d",n,result);
    return 0;
}