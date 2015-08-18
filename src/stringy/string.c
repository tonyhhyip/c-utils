#include <string.h>
#include <stdlib.h>
#include "stringy.h"

void substr(const char* subject, int start, int len, char* dist)
{
    if (len <= 0) {
        len = strlen(subject) - start;
    }

    memcpy(dist, &subject[start], len);
    dist[len] = '\0';
}
