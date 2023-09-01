#include<stdio.h>

int main(){
    int n,m,q=0;
    scanf("%d", &n);
    int arr1[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &m);
    int arr2[m];
    for(int i=0; i<n; i++){
        scanf("%d", &arr2[i]);
    }
    int p = n+m;
    int arr3[p];
    for(int i=0; i<n; i++){
        arr3[i]=arr1[i];
    }
    for(int i=n; i<p; i++){
        arr3[i]=arr2[q];
        q++;
    }
    for(int i=0; i<p; i++){
        for(int j=i+1; j<p; j++){
            if(arr3[i]<arr3[j]){
                int temp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = temp;
            }
        }
    }
    for(int i=0; i<p; i++){
        printf("%d ", arr3[i]);
    }

    return 0;
}
