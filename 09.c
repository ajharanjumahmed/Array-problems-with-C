#include<stdio.h>

int main(){
    int a=5, b=a;
    a=6;
    printf("a=%d, b=%d", a,b);

    int n, max=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if((arr[i]>=arr[j])&&(arr[i]>max)){
                max = arr[i];
            }
            else if((arr[i]<arr[j])&&(arr[j]>max)){
                max = arr[j];
            }
        }

    }
    int min=max;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){

            if((arr[i]<=arr[j])&&(arr[i]<min)){
                min = arr[i];
            }
            else if((arr[i]>arr[j])&&(arr[j]<min)){
                min = arr[j];
            }
        }

    }
    printf("Maximum element is: %d\n", max);
    printf("Minimum element is: %d\n", min);

    return 0;
}
