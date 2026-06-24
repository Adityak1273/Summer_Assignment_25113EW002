#include <stdio.h>
#include <string.h>
int main(){
    char arr1[200],arr2[200];int copy=0;
    printf("Enter the first string : ");
    fgets(arr1,sizeof(arr1),stdin);
    printf("Enter the first string : ");
    fgets(arr2,sizeof(arr2),stdin);
    arr1[strcspn(arr1,"\n")]='\0';
    arr2[strcspn(arr2,"\n")]='\0';
    int len=strlen(arr1);
    for(int i=0;i<len;i++){
        copy=arr1[0];
        for(int j=0;j<len-1;j++){
            arr1[j]=arr1[j+1];
        }
        arr1[len-1]=copy;
        if(strcmp(arr1,arr2)==0){
            printf("String Rotation");
            break;
        }
    }
    if(strcmp(arr1,arr2)!=0){
        printf("Not a String Rotation");
    }
    return 0;
}