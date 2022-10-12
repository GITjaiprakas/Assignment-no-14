#include<stdio.h>
int sum(int);
int main(){
    printf("Enter values in elements : ");
    printf("%d",sum(10));
    return 0;
}
int sum(int n){
    int arr[n],i,small;
    for(i=0;i<=9;i++){
        scanf("%d",&arr[i]);
    }
    small=arr[0];
    for(i=1;i<10;i++){
        if(small>arr[i]){
            small=arr[i];
        }
    }
    return(small);
}


