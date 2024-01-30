/*

For, input n = 3

1 2 3 
4 5 6
7 8 9 

*/

#include<iostream>
using namespace std;

void square_05(int n) {
    
    int row = 1;
    int counter = 1;
    
    /* Outer loop for rows */
    while (row <= n) {
        
        int col = 1;

        /* Loop for printing numbers */
        while (col <= n) {
            
            cout << counter << " ";
            
            col++;
            counter++;
            
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
    square_05(n);
    
}