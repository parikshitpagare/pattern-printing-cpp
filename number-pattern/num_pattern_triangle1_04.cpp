/*

For, input n = 4

4 
43 
432
4321

*/

#include<iostream>
using namespace std;

void triangle1_04(int n) {
    
    int row = 1;
    
    /* Outer loop for rows */
    while (row <= n) {
        
        int col = 1;

        /* Loop for printing numbers */
        while (col <= row) {
            
            cout << n - col + 1;
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