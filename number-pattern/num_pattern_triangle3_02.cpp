/*

For, input n = 4

4444 
333 
22
1

*/

#include<iostream>
using namespace std;

void triangle3_02(int n) {
    
    int row = 1;
    
    /* Outer loop for rows */
    while (row <= n) {
        
        int col = 1;

        /* Loop for printing numbers */
        while (col <= n - row + 1) {
            
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
    triangle3_02(n);
    
}