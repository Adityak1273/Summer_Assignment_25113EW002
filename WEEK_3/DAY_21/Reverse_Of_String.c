#include <stdio.h>
int main(){
    char arr[200];
    printf("Enter the string (World limit 200): ");
    fgets(arr,sizeof(arr),stdin);
    int i=0;
    while (arr[i]!='\0'&&arr[i]!='\n'){
        i++;
    }
    printf("Reverse of a string are : ");
    while (i>=0){
        printf("%c",arr[i]);
        i--;
    }
    return 0;
}