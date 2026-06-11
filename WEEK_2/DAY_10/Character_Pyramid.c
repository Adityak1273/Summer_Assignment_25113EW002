#include <stdio.h>
int main(){
    int n,n1=0;
    printf("Enter the layers of pyramid : ");
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        for(int j=1;j<i;j++){
            printf(" ");
        }
        for(int k=65;k<n1+66;k++){
            printf("%c",k);
        }
        if (n1==0){
            printf(" ");
        }
        else{
            for(int z=n1+64;z>=65;z--){
                printf("%c",z);
        }
        }
        n1++;
        printf("\n");
    }
    return 0;
}