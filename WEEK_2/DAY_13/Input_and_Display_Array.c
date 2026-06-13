#include <stdio.h>
int main(){
    int n1,n2;
    printf("Enter the total elements ,You want to enter in a array : ");
    scanf("%d",&n1);
    int arr[n1];
    for(int i=0;i<n1;i++){
        printf("Enter the element : ");
        scanf("%d",&n2);
        arr[i]=n2;
    }
    printf("Displaying entered elements in array : ");
    for(int j=0;j<n1;j++){
        printf("%d",arr[j]);
        if(j!=n1-1){
            printf(",");
        }
    }
    return 0;
}