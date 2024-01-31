/*

For input, n = 4

******* 
 *****
  ***
   *

*/

#include<iostream>
using namespace std;

void pyramid_02(int n) {

    int row = 1;

    /* Outer loop for rows */
    while (row <= n) {
        
        int space = 1;
        int col = 1;
        
        /* Loop for printing spaces */
        while (space <= row - 1) {

            cout << " ";
            space++;

        }

        /* Loop for printing first triangle */
        while (col <= n - row + 1) {

            cout << "*";
            col++;

        }

        col = 1;
        
        /* Loop for printing second triangle */
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
    pyramid_02(n);
    
}