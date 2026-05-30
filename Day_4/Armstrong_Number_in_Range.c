#include <stdio.h>
#include <math.h>
int main(){
    int s,e,a=0,b=0;
    printf("Enter the starting number of range : ");
    scanf("%d",&s);
    printf("Enter the ending number of range : ");
    scanf("%d",&e);
    int j=0,arr[e-s+1],next=0,next1=0;
    for(int i=s;i<=e;i++){
        int next=i,next1=i;int add=0,c=0;
        while(next>0){
            next/=10;
            add=add+1;

        }
        while(next1>0){
            a=next1%10;
            b=(int)(pow(a,add)+0.5);
            c=c+b;
            next1=next1/10;
        }
        if(i==c){
            arr[j]=i;
            j++;
        }
    }
    printf("Armstrong Numbers in the given range(%d,%d) are : ",s,e);
    for(int k=0;k<j;k++){
        printf("%d",arr[k]);
        if(k!=(j-1)){
            printf(",");
        }
    }
    return 0;
}