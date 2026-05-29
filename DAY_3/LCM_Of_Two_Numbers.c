#include <stdio.h>
int main(){
    int n,m,first,LCM=1,second;
    printf("Enter the First Number : ");
    scanf("%d",&first);
    printf("Enter the Second Number : ");
    scanf("%d",&second);
    if(first>second){
        n=first;
        m=second;
    }
    else if(first<second){
        n=second;
        m=first;
    }
    else{
        n=first;
        m=second;
    }
    for(int i=1;i<n;i++){
        if(n%i==0 && m%i==0){
            LCM*=i;
        }
    }
    printf("LCM of the First Number %d and Second Number %d are : %d",first,second,LCM);
    return 0;
}    