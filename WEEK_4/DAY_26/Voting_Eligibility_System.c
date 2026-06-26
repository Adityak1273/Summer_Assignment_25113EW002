#include <stdio.h>
#include <string.h>
int main(){
    printf("\n      Voting Eligibility System\n\n");
    char arr[50];int age=0;
    printf("Enter the canditate name : ");
    fgets(arr,sizeof(arr),stdin);
    arr[strcspn(arr,"\n")]='\0';
    printf("Enter Age : ");
    scanf("%d",&age);
    if(age<18){
        printf("\n%s is not eligible to vote.",arr);
    }
    else{
        printf("\n%s is eligible to vote.",arr);
    }
    return 0;
}