//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/

#include <stdio.h>

int main() {
    int r1, c1;
    scanf("%d %d", &r1, &c1);

    int A[r1][c1];

    
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int r2, c2;
    scanf("%d %d", &r2, &c2);

    int B[r2][c2];

    
    for(int i = 0; i < r2; i++) {
        for(int j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    
    if(r1 != r2 || c1 != c2) {
        printf("Invalid");
        return 0;
    }

    int C[r1][c1];  

   
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
