#include <stdio.h>

int main(void)
{
    //! showMemory(cursors=[matrix[0], matrix[1]], start=65520)
    //! matrix = showArray2D(matrix, rowCursors=[line], colCursors=[col])
    int arr[2][3];
    int row, col;

    for(row = 0; row < 2; row++)
    {
        for(col = 0; col< 3; col++)
        {
            scanf("%d", &arr[row][col]);
        }
    }
    for(row = 0; row < 2; row++)
    {
        for(col = 0; col< 3; col++)
        {
            printf("%d ", arr[row][col]);
        }
        printf("\n");
    }

    return 0;

}