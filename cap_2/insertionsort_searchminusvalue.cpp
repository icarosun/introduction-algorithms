#include <bits/stdc++.h>
#include "../algorithms/algorithms.h"

using namespace std;

int main () {
    
    int vetor[] = {59, 41, 31, 26};
    int sizevetor = 0;

    cout << "Insertion Sort with Search Minus Value" << endl;

    sizevetor = sizeof(vetor)/sizeof(vetor[0]);

    print_vetor(vetor, sizevetor);
    insertion_sort_with_search_minus_value(vetor, sizevetor);
    print_vetor(vetor, sizevetor);

    return 0;
}