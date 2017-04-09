#include "../tree.h"

enum argument_class {
    INTEGER = 0,
    SSE,
    SSEUP,
    X87,
    X87UP,
    COMPLEX_X87,
    NO_CLASS,
    MEMORY,
};

/* Ensure no structure packing occurs, since we'll be accessing the
 * structure from assembly. */
struct arg {
    struct arg *next;
    ptrdiff_t val;
    enum argument_class dest;
} __attribute__((packed)) ;

ptrdiff_t do_call(void *function_address, tree args);
