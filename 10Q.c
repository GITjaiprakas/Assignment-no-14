#include<stdio.h>
void store(int,int*);
int main(){
    int n,arr1[30],i;
    printf("Enter the no of elements : ");
    scanf("%d",&n);
    printf("Enter the values : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    store(n,arr1);
    return 0;
}
void store(int n,int arr1[]){
    int arr2[n],i;
    for(i=0;i<n;i++){
        arr2[i]=arr1[i];
    }
    for(i=0;i<n;i++){
        printf("%d ",arr2[i]);
    }
}
