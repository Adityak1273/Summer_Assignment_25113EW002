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
    for(int i=0;i<n1;i++){
        int variable=arr[n1-1];
        for(int j=n1-1;j>0;j--){
            arr[j]=arr[j-1];
        }
        arr[0]=variable;
        for(int k=0;k<n1;k++){
            printf("%d",arr[k]);
            if(k!=n1-1){
                printf(",");
            }
        }
        printf("\n");
    }
    printf("Final output : ");
    for(int i=0;i<n1;i++){
        printf("%d",arr[i]);
        if(i!=n1-1){
            printf(",");
        }
    }
    return 0;
}