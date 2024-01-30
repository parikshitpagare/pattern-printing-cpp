/*

For, input n = 4

   1 
  121 
 12321
1234321

*/

#include<iostream>
using namespace std;

void pyramid1_03(int n) {
    
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
            
            cout << col;
            col++;
            
        }

        col = 1;
        
        /* Loop for printing second triangle */
        while (col <= row - 1) {
            
            cout << row - col;
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
    pyramid1_03(n);
    
}