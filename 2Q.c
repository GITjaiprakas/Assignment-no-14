#include<stdio.h>
int sum(int);
int main(){
    printf("Enter values in elements : ");
    printf("sum of values in array is %d",sum(10));
    return 0;
}
int sum(int n){
    int arr[n],sum=0;
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
        sum=sum+arr[i];
    }
    return sum/10;
}

