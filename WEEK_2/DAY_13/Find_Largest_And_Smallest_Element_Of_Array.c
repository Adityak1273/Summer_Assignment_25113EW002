#include <stdio.h>
int main(){
    int n1,copy=0,n2;
    printf("Enter the total elements ,You want to enter in a array : ");
    scanf("%d",&n1);
    int arr[n1];
    for(int i=0;i<n1;i++){
        printf("Enter the element : ");
        scanf("%d",&n2);
        arr[i]=n2;
    }
    for(int i=0;i<n1;i++){
        if (copy<arr[i]){
            copy=arr[i];
        }
    }
    int copy1=copy;
    for(int i=0;i<n1;i++){
        if (arr[i]<copy1){
            copy1=arr[i];
        }
    }
    printf("Largest number of an array : %d\n",copy);
    printf("Smallest number of an array : %d",copy1);
    return 0;
}