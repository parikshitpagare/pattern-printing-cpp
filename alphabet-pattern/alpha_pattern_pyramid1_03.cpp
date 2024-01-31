/*

For, input n = 4

   A 
  ABA 
 ABCBA
ABCDCBA

*/

#include<iostream>
using namespace std;

void pyramid1_03(int n) {
    
    int row = 1;
    
    /* Outer loop for rows */
    while (row <= n) {
        
        int col = 1;
        int space = 1;
        char printAlphabet = 'A';

        /* Loop for printing spaces */
        while (space <= n - row) {
            
            cout << " ";
            space++;
            
        }
        
        /* Loop for printing first triangle */
        while (col <= row) {
            
            cout << printAlphabet;

            printAlphabet++;
            col++;
            
        }

        col = 1;
        printAlphabet = 'A' + row - 2;
        
        /* Loop for printing second triangle */
        while (col <= row - 1) {
            
            cout << printAlphabet;

            printAlphabet--;
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
    pyramid1_03(n);
    
}