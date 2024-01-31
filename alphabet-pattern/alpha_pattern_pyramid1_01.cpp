/*

For, input n = 4

   A 
  BBB 
 CCCCC
DDDDDDD

*/

#include<iostream>
using namespace std;

void pyramid1_01(int n) {
    
    int row = 1;
    char printAlphabet = 'A';
    
    /* Outer loop for rows */
    while (row <= n) {
        
        int col = 1;
        int space = 1;

        /* Loop for printing spaces */
        while (space <= n - row) {
            
            cout << " ";
            space++;
            
        }
        
        /* Loop for printing first triangle */
        while (col <= row) {
            
            cout << printAlphabet;
            col++;
            
        }

        col = 1;
        
        /* Loop for printing second triangle */
        while (col <= row - 1) {
            
            cout << printAlphabet;
            col++;
            
        }

        row++;
        printAlphabet++;

        cout << endl;

    }
}

int main(void) {

    int n;
    
    cout << "Enter n: ";
    cin >> n;
    cout << endl;

    /* Printing pattern */
    pyramid1_01(n);
    
}