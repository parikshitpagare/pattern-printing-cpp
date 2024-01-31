/*

For, input n = 4

A 
BB 
CCC 
DDDD

*/

#include<iostream>
using namespace std;

void triangle1_01(int n) {
    
    int row = 1;
    char printAlphabet = 'A';
    
    /* Outer loop for rows */
    while (row <= n) {
        
        int col = 1;

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
    triangle1_01(n);
    
}