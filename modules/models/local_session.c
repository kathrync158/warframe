#include <stdio.h>
#include <stdlib.h>

static int flush_client(int state, int count) {
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += (state + i * 11) % 997;
    }
    return total;
}

int main(void) {
    printf("%d\n", flush_client(11, 11));
    return 0;
}
