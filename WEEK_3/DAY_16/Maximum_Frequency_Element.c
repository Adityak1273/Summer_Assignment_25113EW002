#include <stdio.h>
int main(){
    int n1,n2;
    printf("Enter the total elements ,You want to enter in a array : ");
    scanf("%d",&n1);
    int arr[n1],count_1=0,element=0;
    for(int i=0;i<n1;i++){
        printf("Enter the element : ");
        scanf("%d",&n2);
        arr[i]=n2;
    }
    for(int i=0;i<n1;i++){
        int count=0;
        for(int j=i;j<n1;j++){
            if(arr[i]==arr[j]){
                count+=1;
            }
        }
        if(count_1<count){
            count_1=count;
            element=arr[i];
        }

    }
    printf("Maximum frequency of element %d are : %d",element,count_1);
    return 0;
}