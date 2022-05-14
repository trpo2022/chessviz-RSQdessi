#include <libchess/input.h>

void input(char* input_step)
{
    while (1) {
        fgets(input_step, 1024, stdin);
        if (strlen(input_step) == step)
            break;
    }
}
