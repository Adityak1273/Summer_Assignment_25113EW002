#include <stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter the total elements ,You want to enter in a array : ");
    scanf("%d",&n1);
    int arr[n1],arr1[n1],add=0,count=0;
    for(int i=0;i<n1;i++){
        printf("Enter the element : ");
        scanf("%d",&n2);
        arr[i]=n2;
    }
    printf("Enter the element ,you want to find : ");
    scanf("%d",&n3);
    for(int i=0;i<n1;i++){
        if(arr[i]==n3){
            arr1[add]=count;
            add++;
        }
        count++;
    }
    printf("Location of %d in array are : ",n3);
    for(int i=0;i<add;i++){
        printf("%d",arr1[i]);
        if(i!=add-1){
            printf(",");
        }
    }
    return 0;
}