/*Two sequences of values ​​A[n] and B[m] are given. Replace
in A[n] the occurrence of values ​​from B[m] by the product of elements
subsequences of B[m].*/
#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> A = { 1, 4, 3 };
    vector<int> B = { 8, 5, 2, 2, 6 };

    cout << "Initial sequence A: ";
    for (int i = 0; i < A.size(); i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "Initial sequence B: ";
    for (int i = 0; i < B.size(); ++i) {
        cout << B[i] << " ";
    }
    cout << endl;

    int productB =1;
    for (int i = 0; i < B.size(); i++) 
    {
        productB *= B[i];
    
    }
    for (int i = 0; i < A.size(); ++i) {
      
        for (int j = 0; j < B.size(); ++j) {
           
            A[i] = productB;  
             
        }
    }
    cout << "Updated sequence A : ";
    for (int i = 0; i < A.size(); ++i) {
        cout << A[i] << " ";
    }
    cout << endl;


    return 0;
}