/*

For, input n = 4

DCBA
DCBA
DCBA
DCBA

*/

#include<iostream>
using namespace std;

void square_01(int n) {
    
    int row = 1; 
    
    /* Outer loop for rows */
    while (row <= n) {
        
        int col = 1;
        char printAlphabet = 'A' + n - 1;
        
        /* Loop for printing alphabets */
        while (col <= n) {

            cout << printAlphabet;
            col++;
            printAlphabet--;
            
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
    square_01(n);
    
}