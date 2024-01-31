/*

For, input n = 4

   A 
  AB 
 ABC 
ABCD

*/

#include<iostream>
using namespace std;

void triangle2_03(int n) {
    
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
        
        /* Loop for printing alphabets */
        while (col <= row) {
            
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
    triangle2_03(n);
    
}