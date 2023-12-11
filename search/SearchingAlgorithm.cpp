

#include "SearchingAlgorithm.h"

SearchingAlgorithm::SearchingAlgorithm() {
    ncomp = 0;
}

int SearchingAlgorithm::tot = 0;
int SearchingAlgorithm::totcomp = 0;
double SearchingAlgorithm::avcomp = 0.0;

void SearchingAlgorithm::displaySearchResults(std::ostream &os, int result, int target) const {
    os << "Target : " << target << (result == -1 ? " introuvable " : " Touver  à l'indice  " + std::to_string(result))
       << std::endl;
    os << "Nombre de comparaison : " << ncomp << std::endl;
}

