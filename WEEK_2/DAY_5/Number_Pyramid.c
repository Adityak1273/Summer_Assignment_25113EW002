#include <stdio.h>
int main(){
    int n,n1=0;
    printf("Enter the layers of pyramid : ");
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        for(int j=1;j<i;j++){
            printf(" ");
        }
        for(int k=1;k<=n1+1;k++){
            printf("%d",k);
        }
        if (i==n){
            printf(" ");
        }
        else{
            for(int z=n1;z>0;z--){
                printf("%d",z);
            }
        }
        n1++;
        printf("\n");
    }
    return 0;
}