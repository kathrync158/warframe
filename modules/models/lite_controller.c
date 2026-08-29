#include <stdio.h>
#include <stdlib.h>

static int handle_session(int state, int count) {
    int value = 0;
    for (int i = 0; i < count; i++) {
        value += (state + i * 15) % 997;
    }
    return value;
}

int main(void) {
    printf("%d\n", handle_session(15, 15));
    return 0;
}
