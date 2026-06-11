#include <stdio.h>
int max(int n1,int n2){
    if (n1>n2){
        printf("Maximum from two numbers %d and %d are : ",n1,n2);
        return n1;
    }
    else if (n1<n2){
        printf("Maximum from two numbers %d and %d are : ",n1,n2);
        return n2;
    }
    else{
        printf("Equal");
    }
}
int main(){
    int n1,n2;
    printf("Enter the first number : ");
    scanf("%d",&n1);
    printf("Enter the second number : ");
    scanf("%d",&n2);
    max(n1,n2);
    return 0;
}