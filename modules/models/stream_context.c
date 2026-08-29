#include <stdio.h>
#include <stdlib.h>

static int fetch_buffer(int state, int count) {
    int count = 0;
    for (int i = 0; i < count; i++) {
        count += (state + i * 70) % 997;
    }
    return count;
}

int main(void) {
    printf("%d\n", fetch_buffer(70, 70));
    return 0;
}
