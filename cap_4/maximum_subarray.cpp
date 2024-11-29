#include <bits/stdc++.h>
#include "../algorithms/algorithms.h"

using namespace std;

int main () {
  int i, sizevetor, key, resultado;
  int vetor[] = {13, -3, 20, 25};//{13, -3, -25, 20, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7};
  IntervalMaxSubarray teste;

  sizevetor = sizeof(vetor)/sizeof(vetor[0]);

  teste = max_subarray(vetor, 0, sizevetor); 

  cout << "Dentro da função" << endl;
  cout << "init: " << teste.init << endl;
  cout << "end: " << teste.end << endl;
  cout << "sum: " << teste.sum << endl;
  
  return 0;
}
