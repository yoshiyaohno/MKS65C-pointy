#include <stdio.h>

int main()
{
    int i;
    char *p;
    i = 3141592653;
    p = &i;
    
    printf( "%d\n%x\n%p\n", i, i, p);
    int leff;
    for( leff = 0; leff < 8; ++leff)
        printf("%hhx\n", *p++);
    return 0;
}
