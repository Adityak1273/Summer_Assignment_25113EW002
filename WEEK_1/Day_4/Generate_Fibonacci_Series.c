#include <stdio.h>
int main(){
    int n,first=0,second=1,third=0,next=0;
    printf("Enter the Number, till you want fibonacci series : ");
    scanf("%d",&n);
    int arr[n+1],add;
    arr[0]=0;arr[1]=1;
    for(int i=2;i<n;i++){
        next=first+second;
        first=second;
        second=next;
        arr[i]=next;
    }
    printf("Fibonacci series till %dth term are : ",n);
    for(int j=0;j<n;j++){
        printf("%d",arr[j]);
        if(j!=n-1){
            printf(",");
        }
    }
    return 0;

}