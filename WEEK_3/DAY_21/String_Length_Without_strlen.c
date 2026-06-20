#include <stdio.h>
int main(){
    char arr[200];
    printf("Enter the string ( Word limit 200 ) : ");
    fgets(arr,sizeof(arr),stdin);
    int i=0;
    while (arr[i]!='\0'&&arr[i]!='\n'){
        i++;
    }
    printf("String length : %d",i);
    return 0;
}