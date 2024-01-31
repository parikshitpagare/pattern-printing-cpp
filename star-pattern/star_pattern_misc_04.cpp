/*

For input, n = 6

******
*    *
*    *
*    *
*    *
******

*/

#include<iostream>
using namespace std;

/* Printing upper and lower line of stars */
void starLine(int n) {
    
    int row = 1;
    
    /* Printing stars */
    while (row <= n) {

        cout << "*";
        row++;

    }

    cout << endl;

}

/* Printing middle pattern  */
void middlePattern(int n) {

    int row = 1;

    /* Outer loop for rows */
    while (row <= n - 2) {

        int col = 1;
        int space = 1;
        
        /* Loop for printing stars */
        while (col <= 1) {

            cout << "*";
            col++;

        }
        
        /* Loop for printing spaces */
        while (space <= n - 2) {

            cout << " ";
            space++;

        }

        col = 1;
        
        /* Loop for printing stars */
        while (col <= 1) {

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
    starLine(n);
    middlePattern(n);
    starLine(n);
    
}