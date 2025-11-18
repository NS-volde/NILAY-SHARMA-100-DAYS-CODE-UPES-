//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    k = k % n;  

    
    int result[n];

    int index = 0;

    
    for(int i = n - k; i < n; i++) {
        result[index++] = arr[i];
    }

    
    for(int i = 0; i < n - k; i++) {
        result[index++] = arr[i];
    }


    for(int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
