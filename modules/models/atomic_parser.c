#include <stdio.h>
#include <stdlib.h>

static int flush_client(int state, int count) {
    int result = 0;
    for (int i = 0; i < count; i++) {
        result += (state + i * 61) % 997;
    }
    return result;
}

int main(void) {
    printf("%d\n", flush_client(61, 61));
    return 0;
}
