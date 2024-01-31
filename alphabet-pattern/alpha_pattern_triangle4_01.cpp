/*

For, input n = 4

AAAA 
 BBB 
  CC
   D

*/

#include<iostream>
using namespace std;

void triangle4_01(int n) {
    
    int row = 1;
    char printAlphabet = 'A';
    
    /* Outer loop for rows */
    while (row <= n) {
        
        int col = 1;
        int space = 1;

        /* Loop for printing spaces */
        while (space <= row - 1) {
            
            cout << " ";
            space++;
            
        }
        
        /* Loop for printing alphabets */
        while (col <= n - row + 1) {
            
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
    triangle4_01(n);
    
}