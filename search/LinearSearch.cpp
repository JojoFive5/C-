

#include "LinearSearch.h"

int LinearSearch::search(const std::vector<int> &arr, int target) {
    tot++;
    ncomp = 0;
    for (int i = 0; i < arr.size(); i++) {
        ncomp++;
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}