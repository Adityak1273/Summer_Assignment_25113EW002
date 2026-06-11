#include <stdio.h>
int perfect(int n){
    int a=0,arr[n];
    for(int i=1;i<n;i++){
        if (n%i==0){
            arr[i-1]=i;
            a++;
        }
    }
    for(int j=0;j<a;j++){
        printf("%d",arr[j]);
    }
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    perfect(n);
    return 0;
}