#include <stdio.h>
    int main(){
        int i, j, a, n, arr[30];
        printf("Enter the value of N \n");
        scanf("%d", &n);
        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &arr[i]);
        for (i = 0; i < n-1; ++i){
            for (j = i + 1; j < n; ++j){
                if (arr[i] > arr[j]) {
                    a =  arr[i];
                    arr[i] = arr[j];
                    arr[j] = a;
                }
            }
        }
        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", arr[i]);
    }
