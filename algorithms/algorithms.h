#ifndef ALGORITHMS
#define ALGORITHMS

#include <bits/stdc++.h>

void print_vetor(int array[], int sizearray); //func aux
void insertion_sort(int array[], int sizearray); //exercise 2.1-2
int linear_search(int array[], int sizearray, int key); //exercise 2.1-3
void plus_bit(int parcela_a[], int parcela_b[]); //plus num bit with 2 cases
void insertion_sort_with_search_minus_value(int array[], int sizearray); //exercise 2.2-2
void merge_sort(int array[], int init_array, int sizearray); //exercise 
void insertion_sort_recursive(int array[], int sizearray); //exercise 2.3-3 
int binary_search(int array[], int left, int right, int key); //exercise 2.3-5
int binary_search_recursive(int array[], int left, int right, int key); //exercise 2.3-5
void insertion_sort_with_binary_search(int array[], int sizearray); //exercise 2.3-6

#endif 