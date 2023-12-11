

#include "BinarySearch.h"
#include <vector>

int BinarySearch::search(const std::vector<int> &arr, int target) {
    tot++;
    ncomp = 0;
    int g = 0;
    int d = (int) arr.size() - 1;
    while (g <= d) {
        ncomp++;
        int m = (g + d) / 2;
        if (arr[m] == target) {
            return m;
        } else if (arr[m] < target) {
            g = m + 1;
        } else {
            d = m - 1;
        }
    }
    return -1;
}