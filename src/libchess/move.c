#include <libchess/move.h>

void move(int** chess, int x1, int y1, int x2, int y2)
{
    int temp;

    temp = chess[y1][x1];
    chess[y1][x1] = chess[y2][x2];
    chess[y2][x2] = temp;
}
