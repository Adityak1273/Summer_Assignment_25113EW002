#include <stdio.h>
#include <string.h>
int main(){
    char arr[200],arr1[200],count1=0,len1;
    printf("Enter the string  ( Word limit 200 ) : ");
    fgets(arr,sizeof(arr),stdin);
    arr[strcspn(arr,"\n")]='\0';
    int len=strlen(arr);
    for(int i=0;i<len;i++){
        int count=0;
        for(int j=i;j<len;j++){
            if(arr[j]!=' '){
                count++;
            }
            else if (arr[j]==' '){
                break;
            }
        }
        if (count1<count){
            count1=count;
            len1=i;
        }
    }
    for(int i=len1;i<len1+count1;i++){
        arr1[i-len1]=arr[i];
    }
    printf("Longest Word in string are : %s",arr1);
    return 0;
}