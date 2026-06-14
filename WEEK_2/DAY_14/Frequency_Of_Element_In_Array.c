#include <stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter the total elements ,You want to enter in a array : ");
    scanf("%d",&n1);
    int arr[n1],arr1[n1];
    for(int i=0;i<n1;i++){
        printf("Enter the element : ");
        scanf("%d",&n2);
        arr[i]=n2;
    }
    for(int i=0;i<n1;i++){
        int count=0,point=0;
        for(int k=0;k<i;k++){
            if(arr[i]==arr[k]){
                point=1;
                break;
            }
        }
        if(point==1){
            continue;
        }
        for(int j=i;j<n1;j++){
            if(arr[i]==arr[j]){
                count+=1;
            }
        }
        printf("Frequency of element %d are : %d\n",arr[i],count);
    }
    return 0;
}