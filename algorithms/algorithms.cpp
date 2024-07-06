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

void mescla(int array[], int init_left, int tail_left, int init_right, int tail_right) {
    int indice_array = init_left, aux, i = 0, j = 0, k; 
    int left[tail_left-init_left], right[tail_right - init_right];
    int sizevetor;
    
    for (aux = init_left; aux < tail_left; aux++) {
        left[i] = array[aux];
        i++;
    }

    for (aux = init_right; aux < tail_right; aux++) {
        right[j] = array[aux];
        j++; 
    }

    i = 0;
    j = 0;
    k = init_left; 
    
    while (init_left < tail_left && init_right < tail_right) {
        if (left[i] < right[j]) {
            array[k] = left[i];
            i++;
            init_left++;
        } else {
            array[k] = right[j];
            init_right++;
            j++;
        }
        k++;
    }    

    sizevetor = sizeof(left)/sizeof(left[0]);
    for (i; i < sizevetor; i++) {
        array[k] = left[i];
        k++;
    }

    sizevetor = sizeof(right)/sizeof(right[0]);
    for (j; j < sizevetor; j++) {
        array[k] = right[j];
        k++;
    }
}

void merge_sort(int array[], int init_array, int sizearray) { 
    int left_array[sizearray], right_array[sizearray], init_left = 0, init_right = 0;
    int tail_left_array = 0, tail_right_array = 0;

    int medium = (init_array + sizearray) / 2; 

    if (medium > init_array) {
        merge_sort(array, init_array, medium);
        merge_sort(array, medium, sizearray);
        mescla(array, init_array, medium, medium, sizearray);
    }
}

void insertion_sort_recursive(int array[], int sizearray) {
    int key, i;

    if (sizearray <= 1) {
        return;
    }
    
    insertion_sort_recursive(array, sizearray - 1);

    key = array[sizearray - 1];

    i = sizearray - 2;
    while (i > -1 && array[i] > key) {
        array[i + 1] = array[i];
        i--;
    }
    
    array[i + 1] = key;
}

int binary_search(int array[], int left, int right, int key) {
    int mid;

    while (left <= right) {
        mid = (left + right) / 2;

        if (array[mid] == key) {
            return mid;
        }

        if (array[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}