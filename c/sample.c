#ifdef TESTING
# include <stdio.h>
#endif

#include "sample.h"

// <here goes your code>

#ifdef TESTING
int main(int argc, char *argv[])
// int main(void)
{
    printf("%d -> %s\n", argc, argv[0]);
    
    return 0;
}

#endif
