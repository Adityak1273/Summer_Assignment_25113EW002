#include <stdio.h>
#include <string.h>
int main(){
    char arr[200];
    printf("Enter the string ( Word limit 200 ) : ");
    fgets(arr,sizeof(arr),stdin);
    int len=strlen(arr);
    for(int i=0;i<len-1;i++){
        int count=0;
        for(int j=i+1;j<len;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if (count>0){
            printf("First repeating character : %c",arr[i]);
            break;
        }
    }
    return 0;
}