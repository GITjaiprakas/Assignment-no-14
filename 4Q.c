#include<stdio.h>
int sum(int);
int main(){
    printf("Enter values in the array : ");
    printf("%d",sum(10));
    return 0;
}
int sum(int n){
    int arr[n],i,large;
    for(i=0;i<=9;i++){
        scanf("%d",&arr[i]);
    }
    large=arr[0];
    for(i=1;i<10;i++){
        if(large<arr[i]){
            large=arr[i];
        }
    }
    return(large);
}


