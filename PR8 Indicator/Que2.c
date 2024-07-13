//Q.2 Cubes Generator
//Develop a Program to find cubes of all elements from a given 2D array using Pointer with UDF.
//Example:
//
//Input:
//Enter array's size: 2
//Enter array elements:
//a[0][0] = 3
//a[0][1] = 2
//a[1][0] = 5
//a[1][1] = 4
//Output:
//Cubes of all elements:
//9 4
//25 64
//
//Marking Criteria: (Total 5 Marks)
//Logic: 3 Marks
//Output: 2 Marks

#include <stdio.h>
#include <conio.h>

// User Defined Function (UDF) to calculate cube
int cube(int *ptr) {
    return (*ptr) * (*ptr) * (*ptr);
}

int main() {
    int row, col,i,j;
    printf("Enter array's size: ");
    scanf("%d %d", &row, &col);

    int arr[row][col];
    int (*ptr)[col];

    ptr = arr;

    // input array elements
    for ( i = 0; i < row; i++) {
        for ( j = 0; j < col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // calculate and print cubes
    printf("Cubes of all elements: ");
    for ( i = 0; i < row; i++) {
        for ( j = 0; j < col; j++) {
            printf("%d ", cube(&arr[i][j]));
        }
    }

    getch();
}


