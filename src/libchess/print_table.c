#include <libchess/enum.h>
#include <libchess/print_table.h>

void print_table(int** chess)
{
    int i, j, k = n;

    for (i = 0; i < n; i++) {
        printf("%d", k);
        for (j = 0; j < n; j++) {
            if (chess[i][j] == empty)
                printf(" ");

            if (chess[i][j] == pawn)
                printf("p");
            if (chess[i][j] == rook)
                printf("r");
            if (chess[i][j] == knight)
                printf("n");
            if (chess[i][j] == bishop)
                printf("b");
            if (chess[i][j] == queen)
                printf("q");
            if (chess[i][j] == king)
                printf("k");

            if (chess[i][j] == PAWN)
                printf("P");
            if (chess[i][j] == ROOK)
                printf("R");
            if (chess[i][j] == KNIGHT)
                printf("N");
            if (chess[i][j] == BISHOP)
                printf("B");
            if (chess[i][j] == QUEEN)
                printf("Q");
            if (chess[i][j] == KING)
                printf("K");
        }
        k--;
        printf("\n");
    }
    printf(" abcdefgh");
}
