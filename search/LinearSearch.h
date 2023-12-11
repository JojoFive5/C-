

#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H


#include "SearchingAlgorithm.h"

class LinearSearch : public SearchingAlgorithm {
public:
    int search(const std::vector<int> &arr, int target) override;
};


#endif 