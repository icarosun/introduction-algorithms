#include "algorithms.h"
#include <bits/stdc++.h>

using namespace std;

void print_vetor(int array[], int sizearray) {
    int i;

    for (i = 0; i < sizearray; i++) {
        cout << array[i] << " ";
    }
    
    cout << endl;
}

void insertion_sort(int array[], int sizearray) {
    int chave = 0, j, i; 

    for (j = 1; j < sizearray; j++) {
        chave = array[j];
        i = j - 1;
        while (i > -1 && array[i] > chave) {
            array[i + 1] = array[i];
            i--;
        }
        array[i + 1] = chave;
    }
}

int linear_search(int array[], int sizearray, int key) {
    int i;

    for (i = 0; i < sizearray; i++) {
        if (array[i] == key) {
            return i;
        }
    }

    return -1;
}
