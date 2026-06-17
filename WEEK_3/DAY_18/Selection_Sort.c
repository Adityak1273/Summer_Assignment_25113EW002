#include <stdio.h>
int main(){
    int n1,n2,n3,n4;
    printf("Enter the total elements ,You want to enter in a array 1: ");
    scanf("%d",&n1);
    int arr1[n1];
    for(int i=0;i<n1;i++){
        printf("Enter the element : ");
        scanf("%d",&n2);
        arr1[i]=n2;
    }
    printf("Sorted array of [");
    for(int i=0;i<n1;i++){
        printf("%d",arr1[i]);
        if(i!=n1-1){
            printf(",");
        }
    }
    printf("] are : [");
    for(int i=0;i<n1-1;i++){
        for(int j=i+1;j<n1;j++){
            int temp=arr1[i];
            if(temp>arr1[j]){
                temp=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;
            }
        }
    }
    for(int i=0;i<n1;i++){
        printf("%d",arr1[i]);
        if(i!=n1-1){
            printf(",");
        }
    }
    printf("]");
    return 0;
}