#include <stdio.h>
#include <string.h>
int main(){
    int n;
    printf("Enter the total number of names, you want to enter : ");
    scanf("%d",&n);
    printf("\n");
    getchar();
    char arr[n][50];
    for(int i=0;i<n;i++){
        printf("Enter Name %d : ",i+1);
        fgets(arr[i],sizeof(arr[i]),stdin);
        arr[i][strcspn(arr[i],"\n")]='\0';
    }
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if(strcmp(arr[i],arr[j])>0){
                char temp[50];
                strcpy(temp,arr[i]);
                strcpy(arr[i],arr[j]);
                strcpy(arr[j],temp);
            }
        }
    }
    printf("\nSorted names --> \n\n");
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
    return 0;
}