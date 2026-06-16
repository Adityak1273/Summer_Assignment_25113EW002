#include <stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter the total elements ,You want to enter in a array : ");
    scanf("%d",&n1);
    int arr[n1],add=0;
    for(int i=0;i<n1;i++){
        printf("Enter the element : ");
        scanf("%d",&n2);
        arr[i]=n2;
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<n1;j++){
            if(arr[j]>arr[j+1]){
                int variable=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=variable;
            }
        }
    }
    printf("[");
    for(int i=0;i<n1;i++){
        printf("%d",arr[i]);
        if(i!=n1-1){
            printf(",");
        }
    }
    printf("] ");
    for(int i=0;i<n1-1;i++){
        if(arr[i]+1!=arr[i+1]){
            add=arr[i]+1;
            break;
        }
    }
    printf("Missing number in array are : %d",add);
    return 0;
}