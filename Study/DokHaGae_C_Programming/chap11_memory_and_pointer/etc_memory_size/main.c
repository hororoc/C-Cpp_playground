#include <stdio.h>
#include <stdlib.h>
#include <malloc/malloc.h>

int main(void) {
    char *pszData = NULL;
    
    pszData = (char*)malloc(sizeof(char) * 6);
    printf("%d\n", (int)malloc_size(pszData));
    
    free(pszData);
    
    return 0;
}
