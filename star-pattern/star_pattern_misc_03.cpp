/*

For input, n = 3

*    *
**  **
******
**  **
*    *

*/

#include<iostream>
using namespace std;

/* Printing upper pattern  */
void upperPattern(int n) {

    int row = 1;

    /* Outer loop for rows */
    while (row <= n) {

        int col = 1;
        int space = 1;
        
        /* Loop for printing stars */
        while (col <= row) {

            cout << "*";
            col++;

        }
        
        /* Loop for printing spaces */
        while (space <= 2 * n - 2 * row) {

            cout << " ";
            space++;

        }

        col = 1;
        
        /* Loop for printing stars */
        while (col <= row) {

            cout << "*";
            col++;

        }

        row++;
        cout << endl;

    }
}

/* Printing lower pattern  */
void lowerPattern(int n) {

    int row = 1;

    /* Outer loop for rows */
    while (row <= n) {

        int col = 1;
        int space = 1;
        
        /* Loop for printing stars */
        while (col <= n - row) {

            cout << "*";
            col++;

        }
   
        /* Loop for printing spaces */
        while (space <= 2 * row) {

            cout << " ";
            space++;

        }

        col = 1;
        
        /* Loop for printing stars */
        while (col <= n - row) {

            cout << "*";
            col++;

        }
        
        row++;
        cout << endl;

    }
}

int main(void) {

    int n;
    
    cout << "Enter n: ";
    cin >> n;
    cout << endl;

    /* Printing pattern */
    upperPattern(n);
    lowerPattern(n);
    
}