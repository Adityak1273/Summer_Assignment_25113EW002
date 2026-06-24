#include <stdio.h>
#include <string.h>
int main(){
    char arr[200],arr1[200];
    printf("Enter the string  ( Word limit 200 ) : ");
    fgets(arr,sizeof(arr),stdin);
    arr[strcspn(arr,"\n")]='\0';
    int len=strlen(arr),a=0;
    for(int i=0;i<len;i++){
        int count=0,count1=0;
        for(int j=i;j<len;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        for(int z=0;z<i;z++){
            if(arr[i]==arr[z]){
                count1++;
            }
        }
        if(count1==0){
            arr1[a]=arr[i];
            a++;
            arr1[a]=count+'0';
            a++;
        }
    }
    printf("Compressed String : %s",arr1);
    return 0;
}