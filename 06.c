#include<stdio.h>

int main(){
    int n;
    int m=0;
    int count=0;
    scanf("%d", &n);
    int arr[n];
    int arr2[count];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        int count2=0;
        for(int j=0; j<n; j++){
            if(arr[i]!=arr[j]){
                count2++;
            }
        }
        if(count2==n-1){
            count++;
            arr2[m] = arr[i];
            m++;
        }
    }
    for(int p=0; p<count; p++){
        printf("%d ", arr2[p]);
    }
    return 0;
}

