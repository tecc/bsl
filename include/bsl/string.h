#pragma once

/**
 * Splits a string by a given separator (delimiter).
 *
 * @example
 * @code
 * "The parameters are 'str' and 'separator', respectively.", "t"
 * -> ["The parame", "ers are 's", "r' and 'separa", "or', respec", "ively."
 * @endcode
 *
 * @param str The string to split.
 * @param separator The string to split {str} by.
 * @return A string array, or if it was unsuccessful, NULL.
 */
char** BslSplit(const char* str, const char* separator);

/**
 * Converts an object to a string representation.
 * @param obj The object to convert.
 * @return The objects string representation.
 */
const char* BslString(void* obj);