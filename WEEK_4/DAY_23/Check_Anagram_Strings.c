#include <stdio.h>
#include <string.h>
int main(){
    char arr1[200],arr2[200];int add=0,var=0;
    printf("Enter the first string : ");
    fgets(arr1,sizeof(arr1),stdin);
    printf("Enter the second string : ");
    fgets(arr2,sizeof(arr2),stdin);
    int len1=strlen(arr1)-2,len2=strlen(arr2)-2;
    for(int i=0;i<len1;i++){
        int count=0;
        for(int j=i;j<len2;j++){
            if(arr1[i]==arr2[j]){
                count++;
                var=j;
                break;
            }
        }
        if(count==1){
            add++;
            for(int j=var;j<=len2;j++){
                if(j==len2){
                    arr2[j]='\0';
                }
                else{
                    arr2[j]=arr2[j+1];
                }
            }
            len2--;
            for(int j=i;j<=len1;j++){
                if(j==len1){
                    arr1[j]='\0';
                }
                else{
                    arr1[j]=arr1[j+1];
                }
            }
            i--;
            len1--;
        }
    }
    if(len1==0&&len2==0){
        printf("Anagram Strings");
    }
    else{
        printf("Not an Anagram Strings");
    }
    return 0;
}