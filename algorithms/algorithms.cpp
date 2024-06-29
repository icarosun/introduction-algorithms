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
    int key = 0, j, i; 

    for (j = 1; j < sizearray; j++) {
        key = array[j];
        i = j - 1;
        while (i > -1 && array[i] > key) {
            array[i + 1] = array[i];
            i--;
        }
        array[i + 1] = key;
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

void plus_bit(int operator_a[], int operator_b[]) {
    int result[] = {0, 0, 0}; 
    int i, sum = 0, chunk = 0;

    for (i = 1; i > -1; i--) {
        sum = operator_a[i] + operator_b[i] + chunk;

        if (sum >= 2) {
            chunk = 1;
            result[i + 1] = sum % 2;      
        } else {
            chunk = 0;
            result[i + 1] = sum;
        }
    }

    result[0] = chunk;

    for (i = 0; i < 3; i++) {
        cout << result[i] << endl;
    }
}

void insertion_sort_with_search_minus_value(int array[], int sizearray) {
    int minus_indice = 0, i, j, aux; 

    for (i = 0; i < sizearray - 1; i++) {
        minus_indice = i;
        for (j = i + 1; j < sizearray; j++) {
            if (array[j] < array[minus_indice]) {
                minus_indice = j;
            }
        }

        aux = array[i];
        array[i] = array[minus_indice];
        array[minus_indice] = aux;
    }
}