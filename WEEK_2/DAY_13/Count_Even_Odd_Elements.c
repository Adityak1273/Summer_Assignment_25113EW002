#include <stdio.h>
int main(){
    int n1,n2;
    printf("Enter the total elements ,You want to enter in a array : ");
    scanf("%d",&n1);
    int arr[n1],count_even=0,count_odd=0;
    for(int i=0;i<n1;i++){
        printf("Enter the element : ");
        scanf("%d",&n2);
        arr[i]=n2;
    }
    for(int i=0;i<n1;i++){
        if(arr[i]%2==0){
            count_even+=1;
        }
        else{
            count_odd+=1;
        }
    }
    printf("Total Even umbers : %d\n",count_even);
    printf("Total Odd umbers : %d",count_odd);
    return 0;
}