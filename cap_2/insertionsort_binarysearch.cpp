#include <bits/stdc++.h>
#include "../algorithms/algorithms.h"

using namespace std;

int main() {
    
    int vetor[] = {1, 3, 6, 7, 4};
    int sizevetor = 0;

    cout << "Insertion Sort with Binary Search" << endl;

    sizevetor = sizeof(vetor)/sizeof(vetor[0]);

    insertion_sort_with_binary_search(vetor, sizevetor);
    print_vetor(vetor, sizevetor);

    return 0;
}