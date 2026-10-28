#pragma once

#include <stddef.h>
#include <stdint.h>

// bionic dropped these. The size argument is a byte count.
static inline void android_memset16(uint16_t* dst, uint16_t value, size_t size) {
    for (size /= sizeof(uint16_t); size; --size)
        *dst++ = value;
}

static inline void android_memset32(uint32_t* dst, uint32_t value, size_t size) {
    for (size /= sizeof(uint32_t); size; --size)
        *dst++ = value;
}
