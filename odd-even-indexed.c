#include <stdio.h>
int main (){
    int n;
    printf ("Enter size of array: ");
    scanf ("%d", &n);
    int arr[n];
    for (int i=0; i<=n-1; i++){
        printf ("Enter element: ");
        scanf ("%d", &arr[i]);
    }
    for (int i=0; i<=n-1; i++){
        if (arr[i]%2==0){
            arr[i]= arr[i]*2;
        }
        else if (arr[i]%2!=0) {
            arr[i]= arr[i]+10;
        }
        printf ("%d ", arr[i]);
    }
    return 0;
}