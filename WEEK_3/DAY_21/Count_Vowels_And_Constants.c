#include <stdio.h>
#include <string.h>
int main(){
    char arr[200];
    printf("Enter the string ( Word limit 200 ) : ");
    fgets(arr,sizeof(arr),stdin);
    int len=0,count=0;
    while(len<strlen(arr)){
        if(arr[len]=='a'||arr[len]=='e'||arr[len]=='i'||arr[len]=='o'||arr[len]=='u'||arr[len]=='A'||arr[len]=='E'||arr[len]=='I'||arr[len]=='O'||arr[len]=='U'){
            count++;
        }
        len++;
    }
    printf("Total Vowels : %d",count);
    return 0;
}