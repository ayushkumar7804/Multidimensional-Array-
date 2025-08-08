/*Ayush Yadav
24070123028*/


#include <iostream>
using namespace std;

int main() {
    int i, j, r1, c1;

    // Input dimensions
    cout << "Enter number of rows and columns: ";
    cin >> r1 >> c1;

    // Declare and input 
    int ar[r1][c1];
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            cout << "Enter element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> ar[i][j];
        }
    }

    // Transpose dimensions
    int r2 = c1;
    int c2 = r1;
    int t[r2][c2];

    // Transpose and display
    cout << "\nTransposed Matrix:\n";
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            t[i][j] = ar[j][i];
            cout << t[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}
/* OUTPUT 
Enter number of rows and columns: 2 2
Enter element [1][1]: 1
Enter element [1][2]: 2
Enter element [2][1]: 3
Enter element [2][2]: 4

Transposed Matrix:
1  3  
2  4  
*/
