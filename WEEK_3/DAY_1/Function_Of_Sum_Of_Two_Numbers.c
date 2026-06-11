#include <stdio.h>
int sum(int n1,int n2){
    return n1+n2;
}
int main(){
    int n1,n2;
    printf("Enter the first number : ");
    scanf("%d",&n1);
    printf("Enter the second number : ");
    scanf("%d",&n2);
    printf("Sum of two numbers are : ");
    sum(n1,n2);
    return 0;
}