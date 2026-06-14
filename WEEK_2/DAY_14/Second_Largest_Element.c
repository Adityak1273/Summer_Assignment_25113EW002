#include <stdio.h>
int main(){
    int n1,n2,n3,largest=0,second_largest=0;
    printf("Enter the total elements ,You want to enter in a array : ");
    scanf("%d",&n1);
    int arr[n1];
    for(int i=0;i<n1;i++){
        printf("Enter the element : ");
        scanf("%d",&n2);
        arr[i]=n2;
    }
    for(int i=0;i<n1;i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
    }
    for(int i=0;i<n1;i++){
        if(second_largest<arr[i] && largest!=arr[i]){
            second_largest=arr[i];
        }
    }
    printf("Second largest of array are : %d",second_largest);
    return 0;
}