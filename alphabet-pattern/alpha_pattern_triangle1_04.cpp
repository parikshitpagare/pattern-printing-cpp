/*

For, input n = 4

D 
DC 
DCB
DCBA

*/

#include<iostream>
using namespace std;

void triangle1_04(int n) {
    
    int row = 1;
    
    /* Outer loop for rows */
    while (row <= n) {
        
        int col = 1;
        char printAlphabet = 'A' + n - 1;

        /* Loop for printing alphabets */
        while (col <= row) {
            
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
    triangle1_04(n);
    
}