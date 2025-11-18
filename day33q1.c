//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int key;
    scanf("%d", &key);

    int start = 0, end = n - 1;

    while(start <= end) {
        int mid = (start + end) / 2;

        if(arr[mid] == key) {
            printf("Found at index %d", mid);
            return 0;
        }
        else if(arr[mid] < key) {
            start = mid + 1;   
        }
        else {
            end = mid - 1;     
        }
    }

    printf("-1");
    return 0;
}
