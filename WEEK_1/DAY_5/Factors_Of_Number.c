#include <stdio.h>
int main(){
    int n,count=1,b=0;int add[b];
    printf("Enter the Number : ");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(n%i==0){
            add[b]=i;
            count++;
            b++;
        }
    }
    printf("Factors of %d are : ",n);
    for(int j=0;j<count-1;j++){
        printf("%d",add[j]);
        if(j!=(count-2)){
            printf(",");
        }
    }
    return 0;
}