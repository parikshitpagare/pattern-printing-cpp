/*

For, input n = 4

1111 
222 
33
4

*/

#include<iostream>
using namespace std;

void triangle3_01(int n) {
    
    int row = 1;
    
    /* Outer loop for rows */
    while (row <= n) {
        
        int col = 1;

        /* Loop for printing numbers */
        while (col <= n - row + 1) {
            
            cout << row;
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
    triangle3_01(n);
    
}