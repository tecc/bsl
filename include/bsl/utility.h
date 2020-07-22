#pragma once
#include <stdint.h>

/**
 * Copies a pointers data to another pointer.
 * @param src The pointer to copy from
 * @param len The length of a pointer.
 * @return A pointer to the data of the src pointer.
 */
void* BslCopy(const void* src, size_t len);