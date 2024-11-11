#include <iostream>
using namespace std;

int main() {
    for(int i = 1 ; i <= 3; i++)
    {
        for(int k = 1; k <= i;k++)
        {
            cout << "*";
        }
        for(int k = (2*i+1); k <= 5;k++)
        {
            cout << " ";
        }
        for(int k = 1; k <= (i == 3 ? i - 1 : i);k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for(int j = 2 ; j >= 1; j--)
    {
        for(int k = 1; k <= j ;k++)
        {
            cout << "*";
        }
        for(int k = (2*j+1); k <= 5;k++)
        {
            cout << " ";
        }
        for(int k = 1; k <= j;k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}