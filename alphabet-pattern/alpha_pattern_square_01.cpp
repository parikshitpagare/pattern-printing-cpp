/*

For, input n = 4

AAAA
BBBB
CCCC
DDDD

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
    square_01(n);
    
}