

#ifndef JUMPSEARCH_H
#define JUMPSEARCH_H


#include "SearchingAlgorithm.h"

class JumpSearch : public SearchingAlgorithm {
public:
    int search(const std::vector<int> &arr, int target) override;
};


#endif 