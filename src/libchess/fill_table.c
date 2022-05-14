#include <libchess/enum.h>
#include <libchess/fill_table.h>

void fill_table(int** chess)
{
    int i, j;
    for (i = 0; i < n; i++) {
        switch (i) {
        case 0:
            chess[i][0] = rook;
            chess[i][1] = knight;
            chess[i][2] = bishop;
            chess[i][3] = queen;
            chess[i][4] = king;
            chess[i][5] = bishop;
            chess[i][6] = knight;
            chess[i][7] = rook;
            break;

        case 1:
            for (j = 0; j < n; j++) {
                chess[i][j] = pawn;
            }
            break;
        case 2:
            for (j = 0; j < n; j++) {
                chess[i][j] = empty;
            }
            break;
        case 3:
            for (j = 0; j < n; j++) {
                chess[i][j] = empty;
            }
            break;
        case 4:
            for (j = 0; j < n; j++) {
                chess[i][j] = empty;
            }
            break;
        case 5:
            for (j = 0; j < n; j++) {
                chess[i][j] = empty;
            }
            break;
        case 6:
            for (j = 0; j < n; j++) {
                chess[i][j] = PAWN;
            }
            break;
        case 7:
            chess[i][0] = ROOK;
            chess[i][1] = KNIGHT;
            chess[i][2] = BISHOP;
            chess[i][3] = QUEEN;
            chess[i][4] = KING;
            chess[i][5] = BISHOP;
            chess[i][6] = KNIGHT;
            chess[i][7] = ROOK;
            break;
        }
    }
}
