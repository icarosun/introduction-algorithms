#include "../algorithms/algorithms.h"
#include <bits/stdc++.h>

using namespace std;

int main() {
  int vetor[] = {16, 4, 10, 14, 7, 9, 3, 2, 8, 1};
  HeapSort heapsort(vetor, 10);

  heapsort.print_heapsort();
  heapsort.max_heapify(vetor, 6);
  heapsort.print_heapsort();
}
