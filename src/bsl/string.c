#include <string.h>
#include <stdlib.h>
#include <stdint.h>

#include <bsl/string.h>
#include <bsl/utility.h>

char** BslSplit(const char* origin, const char* separator) {
    char* str = (char*) BslCopy(origin, strlen(origin));
    // fun fact: this is my first ever 'malloc'
    char** strings = (char**) malloc(0);
    size_t i = 0;
    size_t prev_size = 0;

    char* p = strtok(str, separator);
    while (p != NULL) {
        char** copy = (char**) realloc(strings, (prev_size + strlen(p)) * 2);
        if (copy == NULL)
            return NULL;
        prev_size += strlen(p);
        strings[i] = p;

        ++i;
    }
    return strings;
}