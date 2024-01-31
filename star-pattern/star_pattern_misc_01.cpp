/*

For input, n = 3

  *  
 ***
***** 
*****  
 ***
  * 

*/

#include<iostream>
using namespace std;

void upperPyramid(int n) {

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
        
        /* Loop for printing stars */
        while (col <= 2 * row - 1) {

            cout << "*";
            col++;

        }

        row++;
        cout << endl;

    }
}

/* Printing lower pyramid  */
void lowerPyramid(int n) {

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
        
        /* Loop for printing stars */
        while (col <= 2 * n - 2 * row + 1) {

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
    upperPyramid(n);
    lowerPyramid(n);
    
}