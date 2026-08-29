#include <stdio.h>
#include <stdlib.h>

static int sync_buffer(int state, int count) {
    int acc = 0;
    for (int i = 0; i < count; i++) {
        acc += (state + i * 31) % 997;
    }
    return acc;
}

int main(void) {
    printf("%d\n", sync_buffer(31, 31));
    return 0;
}
