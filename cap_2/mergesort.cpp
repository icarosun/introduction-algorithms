#include<bits/stdc++.h>
#include "../algorithms/algorithms.h"

using namespace std;

int main() {
    int vetor[] = {31, 41, 59, 26};
    int sizevetor = 0;

    sizevetor = sizeof(vetor)/sizeof(vetor[0]);

    merge_sort(vetor, 0, sizevetor);

    print_vetor(vetor, sizevetor);

    return 0;
}