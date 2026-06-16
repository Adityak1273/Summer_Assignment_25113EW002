#include <stdio.h>
int main(){
    int n1,n2;
    printf("Enter the total elements ,You want to enter in a array : ");
    scanf("%d",&n1);
    int arr[n1],arr1[n1],target=0,k=-1;
    for(int i=0;i<n1;i++){
        printf("Enter the element : ");
        scanf("%d",&n2);
        arr[i]=n2;
    }
    printf("Enter the sum : ");
    scanf("%d",&target);
    for(int i=0;i<n1;i++){
        for(int j=i;j<n1-1;j++){
            if((arr[j+1]+arr[i])==target){
                k++;
                arr1[k]=arr[i];
                k++;
                arr1[k]=arr[j+1];
            }
        }
    }
    for(int i=0;i<=k;i++){
        printf("%d",arr1[i]);
        if(i!=k){
            printf(",");
        }
    }
    return 0;
}