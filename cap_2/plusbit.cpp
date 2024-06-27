#include <bits/stdc++.h>
#include "../algorithms/algorithms.h"

using namespace std; 

void cast_binary_string_int(string num_binary, int result_binary[]) {
    int i; 

    for (i = 0; i < 2; i++) {
        if (num_binary[i] == '1') {
            result_binary[i] = 1;
        } else {
            result_binary[i] = 0;
        }
    }
}

int main() {
    string operator_1, operator_2;
    int cast_operator_1[2], cast_operator_2[2]; 
    int i;

    cout << "Plus bit" << endl;

    cout << "Operator_1, valores aceitos (00, 01, 10, 11): ";
    cin >> operator_1;
    cout << "Operator_2, valores aceitos (00, 01, 10, 11): ";  
    cin >> operator_2;

    cast_binary_string_int(operator_1, cast_operator_1);
    cast_binary_string_int(operator_2, cast_operator_2);

    plus_bit(cast_operator_1, cast_operator_2);

    return 0;       
}