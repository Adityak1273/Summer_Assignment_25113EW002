#include <stdio.h>
int fibonacci(int num){
    if(num==0||num==1){
        return 1;
    }
    return fibonacci(num-1)+fibonacci(num-2);
}
int main(){
    int number;
    printf("Enter the Number : ");
    scanf("%d",&number);
    printf("%d",fibonacci(number));
}