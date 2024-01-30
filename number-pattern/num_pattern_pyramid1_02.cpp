/*

For, input n = 4

   4 
  333 
 22222
1111111

*/

#include<iostream>
using namespace std;

void pyramid1_02(int n) {
    
    int row = 1;
    
    /* Outer loop for rows */
    while (row <= n) {
        
        int col = 1;
        int space = 1;

        /* Loop for printing spaces */
        while (space <= n - row) {
            
            cout << " ";
            space++;
            
        }
        
        /* Loop for printing first triangle */
        while (col <= row) {
            
            cout << n - row + 1;
            col++;
            
        }

        col = 1;
        
        /* Loop for printing second triangle */
        while (col <= row - 1) {
            
            cout << n - row + 1;
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
    pyramid1_02(n);
    
}