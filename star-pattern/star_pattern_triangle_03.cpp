/*

For input, n = 4

****
*** 
** 
* 

*/

#include<iostream>
using namespace std;

void triangle_03(int n) {
    
    int row = 1;

    /* Outer loop for rows */
    while (row <= n) {

        int col = 1;

        /* Loop for printing stars */
        while (col <= n - row + 1) {
            
            cout << "*";
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
    triangle_03(n);

}