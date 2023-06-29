#include "main.h"
#include <stdio.h>

int main(void)
{
    int array[1] = { 98 };

    // Test with incorrect length: 0
    printf("Testing print_array(array, 0):\n");
    print_array(array, 0);

    // Test with negative length: -1
    printf("Testing print_array(array, -1):\n");
    print_array(array, -1);

    return 0;
}
