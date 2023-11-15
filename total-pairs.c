#include <stdio.h>
int main(){

    int n,x,pair=0;

    printf ("Enter size of array: ");
    scanf ("%d", &n);

    printf ("Enter the number: ");
    scanf ("%d", &x);

    int arr[n];

    for (int i=0; i<=n-1; i++){
        printf ("Enter element: ");
        scanf ("%d", &arr[i]);
    }

    for (int i=0; i<=n-1; i++){
        for (int j= i+1; j<=n-1; j++){
            if (arr[i]+arr[j]==x){
                pair++;
                printf ("(%d,%d)\n", arr[i], arr[j]);
            }
        }
    }
    printf ("Total pairs: %d", pair);
    

    return 0;
}