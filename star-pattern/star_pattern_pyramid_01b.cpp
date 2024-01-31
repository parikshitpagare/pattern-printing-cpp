/*

For, input n = 4

   *
  ***
 *****
******* 

*/

#include<iostream>
using namespace std;

void pyramid_01(int n) {
    
    int row = 1;

    /* Outer loop for rows */
    while (row <= n) {
        
        int space = 1;
        int col = 1;
        
        /* Loop for printing spaces */
        while (space <= n - row) {

            cout << " ";
            space++;

        }
        
        /* Loop for printing first triangle */
        while (col <= row) {

            cout << "*";
            col++;

        }

        col = 1;

        /* Loop for printing second triangle */
        while (col <= row - 1) {

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
    pyramid_01(n);
    
}