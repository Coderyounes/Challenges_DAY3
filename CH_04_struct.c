#include <stdio.h>

typedef struct dimension {
    int x;
    int y;
} Dimension_t;


int main() {
    Dimension_t *newDimension;
    newDimension->x = 4;
    newDimension->y = 15;

    printf("x = %d; y = %d\n", newDimension->x, newDimension->y);
    return (0);
}


