#include <stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter the total elements ,You want to enter in a array : ");
    scanf("%d",&n1);
    int arr[n1],zero=0;
    for(int i=0;i<n1;i++){
        printf("Enter the element : ");
        scanf("%d",&n2);
        arr[i]=n2;
    }
    printf("Original array [");
    for(int i=0;i<n1;i++){
        printf("%d",arr[i]);
        if(i!=n1-1){
            printf(",");
        }
    }
    printf("]");
    for(int i=0;i<n1;i++){
        if(arr[i]==0){
            for(int j=i;j<n1-1;j++){
                arr[j]=arr[j+1];
            }
            arr[n1-1]=zero;
        }
    }
    printf(" Zero to end array : [");
    for(int i=0;i<n1;i++){
        printf("%d",arr[i]);
        if(i!=n1-1){
            printf(",");
        }
    }
    printf("]");
    return 0;
}