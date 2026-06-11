#include <stdio.h>
int main(){
    int n,add=1;
    printf("Enter the layers of pyramid : ");
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        for(int j=1;j<i;j++){
            printf(" ");
        }
        for(int k=0;k<1+(add-1)*2;k++){
            printf("*");
        }    
        add++;
        printf("\n");
    }
    return 0;
}