/*

For, input n = 5

1234554321
1234**4321
123****321
12******21
1********1

*/

#include<iostream>
using namespace std;

void mix_01(int n) {
    
    int row = 1;
    
    /* Outer loop for rows */
    while (row <= n) {
        
        int col = 1;
        int star = 1;
        
        /* Loop for printing first number triangle */
        while (col <= n - row + 1) {
            
            cout << col;
            col++;
            
        }

        /* Loop for printing stars */
        while (star <= 2 * row - 2) {
            
            cout << "*";
            star++;
            
        }

        col = n - row + 1;
        
        /* Loop for printing second number triangle */
        while (col >= 1) {
            
            cout << col;
            col--;
            
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
    mix_01(n);
    
}
