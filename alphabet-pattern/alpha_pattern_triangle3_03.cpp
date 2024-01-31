/*

For, input n = 4

ABCD 
ABC 
AB
A

*/

#include<iostream>
using namespace std;

void triangle3_03(int n) {
    
    int row = 1;
    
    /* Outer loop for rows */
    while (row <= n) {
        
        int col = 1;
        char printAlphabet = 'A';

        /* Loop for printing alphabets */
        while (col <= n - row + 1) {
            
            cout << printAlphabet;

            printAlphabet++;
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
    triangle3_03(n);
    
}