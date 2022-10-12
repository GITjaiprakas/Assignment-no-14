#include<stdio.h>
void reverse(int,int*);
int main(){
    int arr[30],n,i;
    printf("Enter the range : ");
    scanf("%d",&n);
    printf("Enter the values ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    reverse(n,arr);
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
void reverse(int n,int arr[]){
    int l=0,r=n-1,temp;
    while(l<n/2){
        temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        l++;
        r--;
    } 
}
