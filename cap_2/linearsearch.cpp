#include <bits/stdc++.h>
#include "../algorithms/algorithms.h"

using namespace std;

int main() {
    int i, sizevetor, key, resultado;
    int vetor[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};

    sizevetor = sizeof(vetor)/sizeof(vetor[0]);
    key = 11;

    resultado = linear_search(vetor, sizevetor, key);
    
    cout << "Linear Search" << endl;

    if (resultado != -1) {
        cout << "Elemento encontrado" << endl;
    } else {
        cout << "Não encontrado" << endl;
    }

    return 0;
}