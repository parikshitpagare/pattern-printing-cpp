/*

For, input n = 4

ABCD
ABCD
ABCD
ABCD

*/

#include<iostream>
using namespace std;

void square_01(int n) {
    
    int row = 1; 
    
    /* Outer loop for rows */
    while (row <= n) {
        
        int col = 1;
        char printAlphabet = 'A';
        
        /* Loop for printing alphabets */
        while (col <= n) {

            cout << printAlphabet;
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