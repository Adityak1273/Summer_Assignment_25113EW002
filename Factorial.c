#include <stdio.h>
int main(){
    int a,b=1,fac=1;
    printf("Enter the Number , You want a Factorial of : ");
    scanf("%d",&a);
    if(a==0||a==1){
        printf("Factorial of %d = %d",a,b);
    }
    else{
        for(int i=1;i<=a;i++){
            fac=fac*i;
        }
        printf("Factorial of %d = %d",a,fac);    
    }
    return 0;
}