/*

For, input n = 4

   A 
  BB 
 CCC 
DDDD

*/

#include<iostream>
using namespace std;

void triangle2_01(int n) {
    
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
        
        /* Loop for printing alphabets */
        while (col <= row) {
            
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
    triangle2_01(n);
    
}