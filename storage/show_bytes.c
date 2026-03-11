#include <stdio.h>
#include <string.h>

typedef unsigned char byte;

void show_bytes(byte* start, size_t len) {
    size_t i;

    for (i = 0; i < len; i++) {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x) {
    show_bytes((byte*)&x, sizeof(int));
}

void show_pointer(void* x) {
    show_bytes((byte*)&x, sizeof(void*));
}

void show_str(char* x) {
    show_bytes((byte*)x, strlen(x) + 100);
}

int main() {
    show_str("12345");
    return 0;
}
