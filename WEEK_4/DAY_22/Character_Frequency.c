#include <stdio.h>
#include <string.h>
int main(){
    char arr[200];int i=0;
    printf("Enter the string ( Word limit  200 ) : ");
    fgets(arr,sizeof(arr),stdin);
    printf("Charater frequency\n\n");
    while(arr[i]!='\0'&&arr[i]!='\n'){
        int count=0,count1=0,j=0;
        if(arr[i]!=' '){
            while(arr[j]!='\0'&&arr[j]!='\n'){
                if(arr[i]==arr[j]){
                    count++;
                }
                j++;
            }
            for (int z=0;z<i;z++){
                if(arr[i]==arr[z]){
                    count1++;
                }
            }if(count1==0){
                printf("%c = %d\n",arr[i],count);
            }
        }
        i++;
    }
    return 0;
}