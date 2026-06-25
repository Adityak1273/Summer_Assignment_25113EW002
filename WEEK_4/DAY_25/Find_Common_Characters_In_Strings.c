#include <stdio.h>
#include <string.h>
int main(){
    char arr1[200],arr2[200];
    printf("Enter the first string : ");
    fgets(arr1,sizeof(arr1),stdin);
    printf("Enter the first string : ");
    fgets(arr2,sizeof(arr2),stdin);
    arr1[strcspn(arr1,"\n")]='\0';
    arr2[strcspn(arr2,"\n")]='\0';
    int len1=strlen(arr1),len3=strlen(arr2);
    char arr[len1*len3+1];
    printf("\n");
    int x=0;
    printf("Common character in string 1 and string 2 are : ");
    for(int i=0;i<len1;i++){
        int count=0;
        for(int j=0;j<len3;j++){
            if(arr1[i]==arr2[j]){
                arr[x]=arr1[i];
                x++;
            }
        }
    }
    x--;
    for(int i=0;i<x-1;i++){
        for(int j=i+1;j<x;j++){
            if(arr[i]==arr[j]){
                for(int k=i;k<=x;k++){    
                    if(k==x){
                        arr[k]='\0';
                    }
                    else{
                        arr[k]=arr[k+1];
                    }
                }
                i--;
                x--;
            }
        }
    }
    printf("%s",arr);
    return 0;
}