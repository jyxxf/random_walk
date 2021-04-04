#include <stdio.h>
#include <stdlib.h>
#include <time.h>.
#include <stdint.h>

int main(void)
{
    srand(time(NULL));
    int coordinate[2] = { 0,0 };
    for (size_t i = 0;i < 65535;i++) {
        switch (rand() % 8) {
        case 0:coordinate[1]++;break;
        case 1:coordinate[0]--;coordinate[1]++;break;
        case 2:coordinate[0]--;break;
        case 3:coordinate[0]--;coordinate[1]--;break;
        case 4:coordinate[1]--;break;
        case 5:coordinate[0]++;coordinate[1]--;break;
        case 6:coordinate[0]++;break;
        case 7:coordinate[0]++;coordinate[1]++;
        }
    }
    printf(" [x,y]=[%d,%d]\n", coordinate[0], coordinate[1]);
    return 0;
}
