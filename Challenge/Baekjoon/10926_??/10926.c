#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char* id = NULL;

    id = malloc(sizeof(char) * 51);
    scanf("%s", id);
    if ((int)strlen(id) > 50) return 0;

    printf("%s\?\?!", id);

    free(id);

    return 0;
}