#include<bits/stdc++.h>
#include "../algorithms/algorithms.h"

using namespace std;

int main() {
    int vetor[] = {-1, 3, 6, 7, -4};
    int sizevetor = 0;

    sizevetor = sizeof(vetor)/sizeof(vetor[0]);

    cout << "Is possible to sum two numbers from a list and have the same result" << endl;

    if(sum_of_two_numbers_v2(vetor, sizevetor, -5)) {
        cout << "Encontrou" << endl;
    } else {
        cout << "Não é possível" << endl;
    }

    return 0;
}