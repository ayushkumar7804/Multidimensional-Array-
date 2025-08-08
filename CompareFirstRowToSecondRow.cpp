/*Name - Ayush Yadav
  PRN- 24070123028 */


#include <iostream>
using namespace std;

int main() {
    int arr[2][5] = {
        {1, 2, 3, 4, 5},
        {5, 4, 3, 2, 1} 
    };

    for (int i = 0; i < 5; ++i) {
        if (arr[0][i] == arr[1][i]) {
            cout << "Element " << i << " is equal in both rows: " << arr[0][i] << endl;
        } else {
            cout << "Element " << i << " differs: " << arr[0][i] << " vs " << arr[1][i] << endl;
        }
    }

    return 0;
}

/* OUTPUT 
Element 0 differs: 1 vs 5
Element 1 differs: 2 vs 4
Element 2 is equal in both rows: 3
Element 3 differs: 4 vs 2
Element 4 differs: 5 vs 1
*/
