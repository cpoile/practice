#include "hamming.h"
#include <string.h>

int compute(const char *lhs, const char *rhs) {
    if (lhs == NULL || rhs == NULL || strlen(lhs) != strlen(rhs)) {
        return -1;
    }

    int distance = 0;
    for (int i = 0; i < strlen(lhs); i++) {
        if (lhs[i] != rhs[i]) {
            distance++;
        }
    }
    return distance;
}
