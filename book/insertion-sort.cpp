#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void insertionsort(int array[], int length) {
    int key, j, i; 

    for (j = 1; j < length; j++) {
        key = array[j];
        i = j - 1; 
        while (i > -1 && array[i] > key) {
            array[i + 1] = array[i];
            i = i - 1;
        }
        array[i + 1] = key;
    }
}

int main() {
    int vector[] = {5, 4, 3, 2, 1};

    int length_array = sizeof(vector)/sizeof(vector[0]);

    insertionsort(vector, length_array);

    for (int i = 0; i < length_array; i++) {
        cout << vector[i] << " "; 
    }

    cout << endl;

    return 0;
}