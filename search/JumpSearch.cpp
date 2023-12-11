

#include "JumpSearch.h"
#include <vector>
#include <cmath>

int JumpSearch::search(const std::vector<int> &arr, int target) {
    tot++;
    ncomp = 0;
    int n = (int) arr.size();
    int h = (int) sqrt(n);
    int p = arr[0];
    while (arr[std::min(h, n) - 1] < target) {
        ncomp++;
        p = h;
        h += (int) sqrt(n);
        if (p >= n) {
            return -1;
        }
    }
    while (arr[p] < target) {
        ncomp++;
        p++;
        if (p == std::min(h, n)) {
            return -1;
        }
    }
    if (arr[p] == target) {
        return p;
    }
    return -1;
}