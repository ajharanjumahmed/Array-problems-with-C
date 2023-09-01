#include<stdio.h>

int main(){
    int n;
    int count=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){

            if(arr[i]==arr[j]){
                count++;
                break;
            }
            else{
                continue;
            }
        }

    }
    printf("Total number of duplicate elements found in the array is: %d\n", count);
    return 0;
}

