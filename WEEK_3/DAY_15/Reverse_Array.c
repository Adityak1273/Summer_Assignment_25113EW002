#include <stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter the total elements ,You want to enter in a array : ");
    scanf("%d",&n1);
    int arr[n1];
    for(int i=0;i<n1;i++){
        printf("Enter the element : ");
        scanf("%d",&n2);
        arr[i]=n2;
    }
    int start=0,end=n1;
    printf("Reverse of orignal array [");
    for(int i=0;i<n1;i++){
        printf("%d",arr[i]);
        if(i!=n1-1){
            printf(",");
        }
    }
    printf("] are : [");
    while (start<end){
        int temp=arr[start];
        arr[start]=arr[end-1];
        arr[end-1]=temp;
        start++;
        end--;
    }
    for(int i=0;i<n1;i++){
        printf("%d",arr[i]);
        if(i!=n1-1){
            printf(",");
        }
    }
    printf("]");
    return 0;
}