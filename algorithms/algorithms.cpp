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

int binary_search_recursive(int array[], int left, int right, int key) {
    int mid = (left + right) / 2;

    if (array[mid] == key) {
        return mid;
    }

    if (left <= right) {
        if (array[mid] < key) {
            return binary_search_recursive(array, mid + 1, right, key);
        } else {
            return binary_search_recursive(array, left, mid -1, key);
        }
    } else {
        return -1;
    }
}

void insertion_sort_with_binary_search(int array[], int sizearray) {
    int key = 0, j, i, right, left, mid; 

    for (j = 1; j < sizearray; j++) {
        key = array[j];
        right = j - 1;
        left = -1;   

        while (left < right) {
            mid = (left + right) / 2;
            if (key > array[mid]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        mid = (left + right) / 2;

        for (i = j - 1; i > mid; i--) {
            array[i + 1] = array[i];
        }

        array[i + 1] = key;
        
    }
}

bool sum_of_two_numbers(int array[], int sizearray, int result) {
    int i, j;

    for (i = 0; i < sizearray; i++) {
        for (j = i + 1; j < sizearray; j++) {
            if (array[i] + array[j] == result) {
                return true;
            }
        }
    }

    return false;
}

bool sum_of_two_numbers_v2(int array[], int sizearray, int result) {
    int x = 0; 
    merge_sort(array, 0, sizearray);

    for (int i = 0; i < sizearray; i++) {
        x = result - array[i];

        if (binary_search_recursive(array, 0, sizearray, x) != -1) {
            return true;
        }
    }

    return false;
}

void bubble_sort(int array[], int sizearray) {
    int i, j, aux;

    for (i = 0; i < sizearray; i++) {
        for (j = i + 1; j < sizearray; j++) {
            if (array[i] > array[j]) {
                aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }
}

IntervalMaxSubarray max_subarray(int array[], int init_array, int size_array) {
  IntervalMaxSubarray maxleftarray, maxacrossarray, maxrightarray; 
  int mid = (init_array + size_array) / 2; 
  int sum = array[init_array];
  int end_interval = init_array;

  if (mid > init_array) {
    maxleftarray = max_subarray(array, init_array, mid);
    maxrightarray = max_subarray(array, mid, size_array);
    maxacrossarray = max_middle_subarray(array, init_array, mid, size_array);

    if (maxleftarray.sum > maxrightarray.sum && maxleftarray.sum > maxacrossarray.sum) {
      return maxleftarray;
    } else if (maxrightarray.sum > maxleftarray.sum && maxrightarray.sum > maxacrossarray.sum) {
      return maxrightarray;
    } else {
      return maxacrossarray;
    }

  } else {
    for (int i = init_array + 1; i < size_array; i++) {
      sum += array[i];
      end_interval = i; 
    }

    maxleftarray.init = init_array;
    maxleftarray.end = end_interval;
    maxleftarray.sum = sum;

    return maxleftarray;
  }
}

IntervalMaxSubarray max_middle_subarray(int array[], int init_array, int mid, int size_array) {
  IntervalMaxSubarray across_subarray;
  int sum = array[mid];
  int init_interval = mid, end_interval = mid;
  int total = array[mid];

  for (int i = mid - 1; i >= init_array; i--) {
    sum += array[i];

    if (sum > total) {
      total = sum;
      init_interval = i;
    } 
  }
  
  sum = total; 
  for (int j = mid + 1; j < size_array; j++) {
    sum += array[j]; 
    if (sum > total) {
      total = sum;
      end_interval = j;
    }
  }

  across_subarray.init = init_interval;
  across_subarray.end = end_interval;
  across_subarray.sum = total;

  return across_subarray;
}
