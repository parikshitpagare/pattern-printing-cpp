/*

For, input n = 4

DCBA 
DCB 
DC
D

*/

#include<iostream>
using namespace std;

void triangle3_04(int n) {
    
    int row = 1;
    
    /* Outer loop for rows */
    while (row <= n) {
        
        int col = 1;
        char printAlphabet = 'A' + n - 1;

        /* Loop for printing alphabets */
        while (col <= n - row + 1) {
            
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
    triangle3_04(n);
    
}