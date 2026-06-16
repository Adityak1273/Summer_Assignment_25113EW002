#include <stdio.h>
int main(){
    int n1,n2;
    printf("Enter the total elements ,You want to enter in a array : ");
    scanf("%d",&n1);
    int arr[n1],arr1[n1];
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
    printf("] to removed duplicate array : ");
    for(int i=0;i<n1;i++){
        for(int j=i+1;j<n1;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<n1-1;k++){
                    arr[k]=arr[k+1];
                }
                n1--;
                j--;
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
    printf("]");
    return 0;
}