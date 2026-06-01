#include <stdio.h>
int main(){
    int n,notprime=0,a;
    printf("Enter the Number : ");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0){
            notprime+=1;
            break; 
        }
    }
    if(n==0 || n==1){
            printf("%d is not Prime.",n);
        }
    else if (notprime==1){
            printf("%d is not Prime.",n);
        }
    
    else{
            printf("%d is Prime.",n);
        }    
    return 0;    
}