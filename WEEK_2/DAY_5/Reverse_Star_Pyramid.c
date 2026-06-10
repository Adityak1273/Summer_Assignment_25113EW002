#include <stdio.h>
int main(){
    int n;
    printf("Enter the layers of pyramid : ");
    scanf("%d",&n);
    int n1=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int k=1+(n1-1)*2;k>0;k--){
            printf("*");
        }    
        n1--;
        printf("\n");
    }
    return 0;
}