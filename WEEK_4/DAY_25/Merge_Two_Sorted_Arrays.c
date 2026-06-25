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
    printf("\n");
    printf("Enter the total elements ,You want to enter in a array 2: ");
    scanf("%d",&n3);
    int arr2[n3];
    for(int i=0;i<n3;i++){
        printf("Enter the element : ");
        scanf("%d",&n4);
        arr2[i]=n4;
    }
    printf("\n");
    printf("Merged Sorted array of [");
    for(int i=0;i<n1;i++){
        printf("%d",arr1[i]);
        if(i!=n1-1){
            printf(",");
        }
    }
    printf("] and [");
    for(int i=0;i<n3;i++){
        printf("%d",arr2[i]);
        if(i!=n3-1){
            printf(",");
        }
    }
    int n=n1+n3,arr[n];
    printf("] are : [");
    for(int i=0;i<n1;i++){
        arr[i]=arr1[i];
    }
    for(int i=n1;i<n1+n3;i++){
        arr[i]=arr2[i-n1];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        if(i!=n-1){
            printf(",");
        }
    }
    printf("]");
    return 0;
}