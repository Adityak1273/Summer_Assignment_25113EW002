#include <stdio.h>
int main(){
    int n1,n2,n3,n4=-1;
    printf("Enter the total elements ,You want to enter in a array 1: ");
    scanf("%d",&n1);
    int arr1[n1];
    for(int i=0;i<n1;i++){
        printf("Enter the element : ");
        scanf("%d",&n2);
        arr1[i]=n2;
    }
    printf("Enter the target : ");
    scanf("%d",&n3);
    printf("Index of target %d of array [",n3);
    for(int i=0;i<n1;i++){
        printf("%d",arr1[i]);
        if(i!=n1-1){
            printf(",");
        }
    }
    printf("] are : ");
    int low=0,high=n1-1;
    int mid=(low+high)/2;
    while (low<=high){
        if(arr1[mid]==n3){
            n4=mid;
            break;
        }
        else if(n3<arr1[mid]){
            high=mid-1;
            mid=(low+high)/2;
        }
        else if (arr1[mid]<n3){
            low=mid+1;
            mid=(low+high)/2;
        }
        
    }
    if(n4==-1){
        printf("Not found");
    }
    else{
        printf("%d",n4);
    }
    return 0;
}