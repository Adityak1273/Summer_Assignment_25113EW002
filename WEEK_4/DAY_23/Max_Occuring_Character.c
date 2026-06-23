#include <stdio.h>
#include <string.h>
int main(){
    char arr[200];
    printf("Enter the string ( Word limit  200 ) : ");
    fgets(arr,sizeof(arr),stdin);
    int len=strlen(arr),count_1=0,element=0;
    for(int i=0;i<len;i++){
        int count=0;
        for(int j=i;j<len;j++){
            if(arr[i]==arr[j]){
                count+=1;
            }
        }
        if(count_1<count){
            count_1=count;
            element=arr[i];
        }

    }
    printf("Max frequency element '%c' of frequency : %d",element,count_1);
    return 0;
}