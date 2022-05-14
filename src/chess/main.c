#include <libchess/check_move.h>
#include <libchess/enum.h>
#include <libchess/fill_table.h>
#include <libchess/find_position_black.h>
#include <libchess/find_position_white.h>
#include <libchess/input.h>
#include <libchess/move.h>
#include <libchess/print_table.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define n 8
#define step 12

int main()
{
    int** chess;
    char* input_step;
    int flag = 1;

    chess = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++)
        chess[i] = (int*)malloc(n * sizeof(int));
    input_step = (char*)malloc(step * sizeof(char));
    fill_table(chess);
    print_table(chess);
    while (flag == 1) {
        printf("\nEnter white and black steps: ");
        input(input_step);
        flag = check_move(input_step);
    }
    printf("\n");

    find_position_white(chess, input_step);
    find_position_black(chess, input_step);
    printf("\n");
    print_table(chess);

    return 0;
}
