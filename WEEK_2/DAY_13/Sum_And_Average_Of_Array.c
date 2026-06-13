#include <stdio.h>
int main(){
    int n1,n2;
    printf("Enter the total elements ,You want to enter in a array : ");
    scanf("%d",&n1);
    int arr[n1],sum=0,avg=0;
    for(int i=0;i<n1;i++){
        printf("Enter the element : ");
        scanf("%d",&n2);
        arr[i]=n2;
    }
    for(int i=0;i<n1;i++){
        sum+=arr[i];
    }
    avg=sum/n1;
    printf("Sum of elements of an array are: %d\n",sum);
    printf("Aveage of elements of an array are : %d",avg);
    return 0;
}