/*

For, input n = 4

1111
2222
3333
4444

*/

#include<iostream>
using namespace std;

void square_01(int n) {
    
    int row = 1;
    
    /* Outer loop for rows */
    while (row <= n) {
        
        int col = 1;

        /* Loop for printing numbers */
        while (col <= n) {
            
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
    square_01(n);
    
}