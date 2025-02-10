#include <iostream>

using namespace std;

int main()
{
     int row, column;                             // Variables to store user specified row and column size
    cin >> row >> column;                        // Taking inputs and storing row and column size

    int colArray[row];                           // Initialize colArray to store different column size in row
    int **ptr = new int *[row];                  // Allocating a pointer array to be used to store "row" array addresses

    for (int i = 0; i < row; i++) {
        cin >> column;                           // Taking and storing the inputs of specified row size
        ptr[i] = new int[column];                // Dynamically allocating array size for each row
        colArray[i] = column;                    // Storing different column size to keep track
    }

    for (int i = 0; i < row; i++) {              // Taking input and saving its addresses on the arrays
        for (int j = 0; j < colArray[i]; j++) {
            cin >> ptr[i][j];
        }
    }

    for (int i = 0; i < row; i++) {              // Printing each values of the arrays
        for (int j = 0; j < colArray[i]; j++) {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }

    delete[] ptr;
    return 0;
}
