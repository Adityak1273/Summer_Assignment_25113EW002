#include <stdio.h>
int main(){
    int n,sum=0;
    printf("Enter number of Natural numbers You want to Sum : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("Sum = %d",sum);
    return 0;
}