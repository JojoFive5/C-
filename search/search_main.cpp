#include "SearchingAlgorithm.h"
#include "LinearSearch.h"
#include "JumpSearch.h"
#include "BinarySearch.h"
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {

    vector<int> arr = {-65, -128, -34, -98, -143, -17, -122, -112, -47, -85,
                                -56, -131, -104, -120, -3, -95, -60, -26, -84, -50,
                                -5, -113, -69, -9, -37, -48, -92, -42, -11, -27, -89,
                                -76, -28, -77, -108, -101, -21, -93, -78, -115, -30,
                                -143, -33, -62, -45, -99, -70, -54, -116, -83,36, 107, 122, 46, 65, 72, 3, 134, 53, 7, 46, 0, 27, 25, 1, 114, 90, 53, 47, 18, 135, 87, 56, 50, 60, 120, 6, 102, 43, 40, 13, 68, 81, 109, 33, 127, 117, 63, 70, 99, 88, 7, 76, 98, 83, 92, 77, 28, 37, 51, 66
    };
    int target = 17;

    SearchingAlgorithm *algorithms[] = {new LinearSearch(), new JumpSearch(), new BinarySearch()};

    ostringstream os;

    for (const auto algorithm: algorithms) {

        os << "Recherche pour la target  " << target << " choisir ";

        if (dynamic_cast<LinearSearch *>(algorithm)) {
            os << "Linear Search:" << std::endl;
        } else if (dynamic_cast<JumpSearch *>(algorithm)) {
            os << "Jump Search:" << std::endl;
        } else if (dynamic_cast<BinarySearch *>(algorithm)) {
            os << "Binary Search:" << std::endl;
        }

        int result = algorithm->search(arr, target);
        algorithm->displaySearchResults(os, result, target);
        SearchingAlgorithm::totcomp += algorithm->ncomp;
    }

    SearchingAlgorithm::avcomp =
            (double) SearchingAlgorithm::totcomp / SearchingAlgorithm::tot;

    os << endl << "-------------------------" << endl;
    os << "Nombre de recherche total : " << SearchingAlgorithm::tot << endl;
    os << "Nombre de comparaison total : " << SearchingAlgorithm::totcomp << endl;
    os << "Nombre de comparaison moyen : " << SearchingAlgorithm::avcomp << endl;

    cout << os.str();
}