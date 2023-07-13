#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#include <stdlib.h>
#include <stdio.h>

void *malloc_checked(unsigned int b) {
    void *ptr = malloc(b);
    if (ptr == NULL) {
        fprintf(stderr, "Failed to allocate memory\n");
        exit(98);
    }
    return ptr;
}
