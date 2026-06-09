#include <stdio.h>
int main(){
    int n;
    printf("Enter the hollow square dimension : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("*");
    }
    printf("\n");
    for(int j=0;j<n-2;j++){
        for(int k=1;k<=n;k++){
            if (k==1 || k==n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        printf("*");
    }
    return 0;
}