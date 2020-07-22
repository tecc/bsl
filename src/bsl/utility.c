#include <bsl/utility.h>
#include <stdlib.h>
#include <string.h>

void* BslCopy(const void *src, size_t len) {
    void* dest = malloc(sizeof(src));
    memcpy(dest, src, len);
    return dest;
}
