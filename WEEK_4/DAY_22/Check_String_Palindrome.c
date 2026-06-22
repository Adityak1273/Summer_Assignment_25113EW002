#include <stdio.h>
#include <string.h>
int main(){
    char arr[200];
    printf("Enter the string ( Word limit 200 ) : ");
    fgets(arr,sizeof(arr),stdin);
    int low=0,high=strlen(arr)-2,count=0;
    while (low<high){
        if(arr[low]==arr[high]){
            count++;
        }
        low++;
        high--;
    }
    if(count==(strlen(arr)-1)/2){
        printf("Palindrome");
    }
    else{
        printf("Not a Palindrome");
    }
    return 0;
}