#include <stdio.h>
#include <string.h>
int main(){
    char arr[200];int i=0;
    printf("Enter the string ( Word limit 200 ) : ");
    fgets(arr,sizeof(arr),stdin);
    int len=strlen(arr);
    for(int i=0;i<len;i++){
        if(arr[i]==' '){
            for(int j=i;j<=len;j++){
                if(j==len){
                    arr[j]='\0';
                }
                else{
                    arr[j]=arr[j+1];
                }
            }
            i--;
            len--;
        }
    }
    printf("%s",arr);
    return 0;
}