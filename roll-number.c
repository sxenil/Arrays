#include <stdio.h>
int main (){
    int arr[10]= {12,59,35,48,59,38,31,37,89,76};
    for (int i=0; i<=9; i++){
        if (arr[i]<35){
        printf ("Roll number: %d\n", arr[i]);
        }
    }
    return 0;
}