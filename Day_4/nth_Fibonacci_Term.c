#include <stdio.h>
int main(){
    int n,first=0,second=1,next=0;
    printf("Enter the fibonacci term, you want to find : ");
    scanf("%d",&n);
    int arr[n+1];
    arr[0]=0;arr[1]=1;
    for (int i=2;i<n;i++){
        next=first+second;
        first=second;
        second=next;
        arr[i]=next;
    }
    printf("%dth Fibonacci term are : %d",n,arr[n-1]);
    return 0;
}