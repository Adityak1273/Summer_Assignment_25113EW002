#include <stdio.h>
#include <string.h>
int main(){
    char arr[200];int i=0,count=0;
    printf("Enter the string ( Word limit  200 ) : ");
    fgets(arr,sizeof(arr),stdin);
    while (arr[i]!='\0'&&arr[i]!='\n'){
        if(arr[i]!=' '){
            count++;
        }
        i++;
    }
    printf("%d",count);
    
}