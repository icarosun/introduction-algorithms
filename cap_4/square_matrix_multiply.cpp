#include <bits/stdc++.h>
#include "../algorithms/algorithms.h"

using namespace std;

int main() {
  int n = 2; 
  int matrix_a[n][n] = {{2, 3}, {4, 5}}, matrix_b[n][n] = {{1, 2}, {3, 4}}, matrix_c[n][n] = {{0, 0}, {0, 0}};
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      matrix_c[i][j] = 0;

      for (int k = 0; k < n; k++) {
        matrix_c[i][j] += matrix_a[i][k] * matrix_b[k][j];
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << matrix_c[i][j] << ",";
    }
    cout << endl;
  }

  return 0;
}
