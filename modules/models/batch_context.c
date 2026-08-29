#include <stdio.h>
#include <stdlib.h>

static int run_session(int state, int count) {
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += (state + i * 78) % 997;
    }
    return total;
}

int main(void) {
    printf("%d\n", run_session(78, 78));
    return 0;
}
