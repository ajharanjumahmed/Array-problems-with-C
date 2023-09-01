#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr1[n];
    int arr2[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr1[i]);
        arr2[i] = arr1[i];
    }
    printf("The elements stored in the first array are: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr1[i]);
    }
    printf("\n");
    printf("The elements stored in the second array are: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr2[i]);
    }
    return 0;
}

