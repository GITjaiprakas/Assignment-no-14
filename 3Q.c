#include<stdio.h>
void sum(int);
int main(){
    printf("Enter values in elements : ");
    sum(10);
    return 0;
}
void sum(int n){
    int arr[n],sum_of_odd=0,sum_of_even=0,i;
    for(i=0;i<=9;i++){
        scanf("%d",&arr[i]);
        if(arr[i]&1){
            sum_of_odd=sum_of_odd+arr[i];
        }
        else{
            sum_of_even=sum_of_even+arr[i];
        }
    }
    printf("sum of all odd numbers in an array is %d \n",sum_of_odd);
    printf("and sum of all even numbers in array is %d",sum_of_even);
}


