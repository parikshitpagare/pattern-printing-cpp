/*

For, input n = 3

A B C
D E F
G H I

*/

#include<iostream>
using namespace std;

void square_01(int n) {
    
    int row = 1; 
    char printAlphabet = 'A';
    
    /* Outer loop for rows */
    while (row <= n) {
        
        int col = 1;
        
        /* Loop for printing alphabets */
        while (col <= n) {
            
            cout << printAlphabet << " ";
            col++;
            printAlphabet++;
            
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