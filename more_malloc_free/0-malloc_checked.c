#include <stdlib.h>
#include <stdio.h>

void *malloc_checked(unsigned int b) {
    void *ptr = malloc(b);
    if (ptr == NULL) {
        fprintf(stderr, "[stderr]: Failed to allocate memory\n");
        exit(98);
    }
    return ptr;
}

int main() {
    void *ptr = malloc_checked(10);
    printf("msg - [Got]\n");
    printf("%d\n", *((int*)ptr));  // Just an example usage
    free(ptr);
    return 0;
}
