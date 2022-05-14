#include <libchess/find_position_black.h>
#include <libchess/move.h>

void find_position_black(int** chess, char* input_step)
{
    int i = 6, x1, x2, y1, y2;
    while (input_step[i] != '\0') {
        if (input_step[i] == '-')
            i++;
        for (; input_step[i] != '-' && input_step[i] != '\0'; i++) {
            if (input_step[i] == 'a')
                x2 = 0;
            if (input_step[i] == 'b')
                x2 = 1;
            if (input_step[i] == 'c')
                x2 = 2;
            if (input_step[i] == 'd')
                x2 = 3;
            if (input_step[i] == 'e')
                x2 = 4;
            if (input_step[i] == 'f')
                x2 = 5;
            if (input_step[i] == 'g')
                x2 = 6;
            if (input_step[i] == 'h')
                x2 = 7;

            if (input_step[i] == '1')
                y2 = 7;
            if (input_step[i] == '2')
                y2 = 6;
            if (input_step[i] == '3')
                y2 = 5;
            if (input_step[i] == '4')
                y2 = 4;
            if (input_step[i] == '5')
                y2 = 3;
            if (input_step[i] == '6')
                y2 = 2;
            if (input_step[i] == '7')
                y2 = 1;
            if (input_step[i] == '8')
                y2 = 0;
        }
        if (input_step[i] == '\0')
            break;
        x1 = x2;
        y1 = y2;
    }
    move(chess, x1, y1, x2, y2);
}
