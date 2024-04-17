#include <stdlib.h>
#include <stdio.h>

//Number of allocations to perform
#define COUNT 10

int main()
{
    void** ptrs[COUNT];
    for (int i = 0; i < COUNT; i++)
    {
        //Allocate a block of size 0
        ptrs[i] = malloc(0);
        if (ptrs[i] == NULL)
        {
            printf("Allocation failed, exiting...");
            exit(1);
        }

        //Print block's starting pointer
        printf("Zero Alloc %d: %p\n", i, ptrs[i]);
    }

    //Free allocated blocks
    for (int i = 0; i < COUNT; i++)
    {
        free(ptrs[i]);
    }
    return 0;
}