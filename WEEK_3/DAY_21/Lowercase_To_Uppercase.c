#include <stdio.h>
#include <string.h>
int main(){
    char arr[200];int i=0,a=64,b=91;
    printf("Enter the string ( Word limit 200 ) : ");
    fgets(arr,sizeof(arr),stdin);
    while(arr[i]!='\0'&&arr[i]!='\n'){
        if(a>arr[i]&&arr[i]<b){
            printf("%c",arr[i]);
        }
        else{
            printf("%c",arr[i]-32);
        }
        i++;
    }
    return 0;
}