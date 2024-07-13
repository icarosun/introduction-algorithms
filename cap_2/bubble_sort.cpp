#include <bits/stdc++.h>
#include "../algorithms/algorithms.h"

using namespace std;

int main () {
    
    int vetor[] = {31, -2, 41, 59, 26};
    int sizevetor = 0;

    cout << "Insertion Sort" << endl;

    sizevetor = sizeof(vetor)/sizeof(vetor[0]);

    bubble_sort(vetor, sizevetor);
    print_vetor(vetor, sizevetor);

    return 0;
}