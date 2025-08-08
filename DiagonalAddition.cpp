/*Ayush Yadav
24070123028*/

#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter matrix dimension (rows and columns): ";
    cin >> r >> c;

    if (r == c) {
        // Dynamic allocation of 2D array
        int** ar = new int*[r];
        for (int i = 0; i < r; ++i)
            ar[i] = new int[c];

        // Input matrix elements
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << "Enter element (" << i << "," << j << "): ";
                cin >> ar[i][j];
            }
        }

        int sumPrimary = 0, sumSecondary = 0;

        // Calculate primary diagonal sum
        for (int i = 0; i < r; i++) {
            sumPrimary += ar[i][i];
        }

        // Calculate secondary diagonal sum
        for (int i = 0; i < r; i++) {
            sumSecondary += ar[i][r - 1 - i];
        }

        cout << "\nSum of primary diagonal: " << sumPrimary << endl;
        cout << "Sum of secondary diagonal: " << sumSecondary << endl;

        // Free allocated memory
        for (int i = 0; i < r; ++i)
            delete[] ar[i];
        delete[] ar;
    } else {
        cout << "Cannot perform diagonal addition for non-square matrix." << endl;
    }

    return 0;
}
/*OUTPUT
Enter matrix dimension (rows and columns): 3 3
Enter element (0,0): 1
Enter element (0,1): 2
Enter element (0,2): 3
Enter element (1,0): 4
Enter element (1,1): 5
Enter element (1,2): 6
Enter element (2,0): 7
Enter element (2,1): 9
Enter element (2,2): 2

Sum of primary diagonal: 8
Sum of secondary diagonal: 15
*/


