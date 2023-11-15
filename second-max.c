#include <stdio.h>
#include <limits.h>
int main () {
    int n;
    printf ("Enter size of array: ");
    scanf ("%d", &n);
    int arr[n];
    for (int i=0; i<=n-1; i++){
        printf ("Enter element: ");
        scanf ("%d", &arr[i]);
    }
    int max= INT_MIN;
    int smax= INT_MIN; //to print max use min and vise versa
    for (int i=0; i<=n-1; i++){
        if (max<arr[i]){
            max= arr[i];
        }
    }
    for (int i=0; i<=n-1; i++){
        if (arr[i]!=max && smax<arr[i]){
            smax= arr[i];
        }
    }
    printf ("Second maximum value: %d", smax);
    return 0;
}