#include <stdio.h>
int main(){
    int t;
    printf("Enter the Number , You wanta Table of : ");
    scanf("%d",&t);
    for(int i=1;i<11;i++){
        printf("%d",t);
        printf(" X %d = %d",i,t*i);
        printf("\n");
    }
    return 0;
}