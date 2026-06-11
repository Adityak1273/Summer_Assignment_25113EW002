#include <stdio.h>
int fibonacci(int n){
    int sum=0,n1=0,n2=1,j=0,arr[n];
    arr[j]=0;arr[j+1]=1;
    for(int i=2;i<n;i++){
        sum=n1+n2;
        arr[j+2]=sum;
        j++;
        n1=n2;
        n2=sum;
    }
    for(int k=0;k<n;k++){
        printf("%d",arr[k]);
        if (k!=n-1){
            printf(",");
        }
    }
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}