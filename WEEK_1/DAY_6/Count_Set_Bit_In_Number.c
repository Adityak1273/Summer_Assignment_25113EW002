#include <stdio.h>
int main(){
    int n,copy,rem,add=0;
    printf("Enter the Decimal Number : ");
    scanf("%d",&n);
    copy=n;
    while (copy>0){
        rem=copy%2;
        if(rem!=0){
            add++;
        }
        copy/=2;
    }
    printf("Set bit number of %d is : %d",n,add);
    return 0;
}    