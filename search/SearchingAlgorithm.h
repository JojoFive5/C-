

#ifndef SEARCHINGALGORITHM_H
#define SEARCHINGALGORITHM_H

#include <vector>
#include <iostream>
#include <sstream>

class SearchingAlgorithm {
public:
    int ncomp = 0;
    static int tot;
    static int totcomp;
    static double avcomp;

    SearchingAlgorithm();

    virtual int search(const std::vector<int> &arr, int target) = 0;

    void displaySearchResults(std::ostream &os, int result, int target) const;
};

#endif 