#include <bsl/io.h>
#include <bsl/string.h>
#include <stdio.h>

void BslPrint(void* str) {
    printf("%s", BslString(str));
}
