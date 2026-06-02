#include <stdio.h>
int main(){
    float n,dec,zero=0;int add=1,add1=1,copy,copy1,rem,arr[add],arr1[add1],k=0,j=0,value;
    printf("Enter the Decimal Number : ");
    scanf("%f",&n);
    copy=n;
    copy1=n;
    printf("Decimal number of %f to Binary number are : ",n);
    while (copy>0){
        rem=copy%2;
        if(rem==0){
            copy/=2;
            add++;
            arr[k]=0;
        }
        else{
            copy/=2;
            add++;
            arr[k]=1;
        }
        k++;
    }
    for(int i=k-1;i>=0;i--){
        printf("%d",arr[i]);
    }
    dec=n-(int)n;
    while (dec>0){
        value=dec*2;
        arr1[j]=value;
        j++;
        add1++;
        dec=dec*2-value;
        value=0;
    }
    printf(".");
    for(int z=0;z<j;z++){
        printf("%d",arr1[z]);
    }
    return 0;
}