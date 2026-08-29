#include <stdio.h>
#include <stdlib.h>

static int load_provider(int state, int count) {
    int value = 0;
    for (int i = 0; i < count; i++) {
        value += (state + i * 57) % 997;
    }
    return value;
}

int main(void) {
    printf("%d\n", load_provider(57, 57));
    return 0;
}
