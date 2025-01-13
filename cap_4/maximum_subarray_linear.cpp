#include <bits/stdc++.h>
#include "../algorithms/algorithms.h"

using namespace std;

int main (int argc, char *argv[]) {
  int i, sizevetor, key, resultado;
  int vector[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4}; //{13, -3, -25, 20, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7};
  IntervalMaxSubarray test;

  sizevetor = sizeof(vector) / sizeof(vector[0]);

  test = max_subarray_linear(vector, sizevetor);

  cout << "Max subarray" << endl;

  cout << "sum: " << test.sum << endl;
  cout << "init: " << test.init << endl;
  cout << "end: " << test.end << endl;

  return 0;
}
