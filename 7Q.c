#include<stdio.h>
int main(){
    int i,j,a,number[10];
    printf("Enter the numbers \n");
    for(i=0; i<10; ++i)
        scanf("%d",&number[i]);
    for(i=0;i<9;++i){
        for(j=i+1; j<10; ++j){
           if(number[i]<number[j]){
               a=number[i];
               number[i]=number[j];
               number[j]=a;
           }
       }
    }
    printf ("The 2nd largest number is = %d\n", number[1]);
}
