#include <iostream>
using namespace std;

int main() {
    const int size = 6;
    int input[size] = {1, 2, 2, 3, 4, 4};
    
    for (int i = 0; i < size ; i++)
    {
        for (int k = i+1; k < size ; k++)
        {
            if(input[i] == input[k])
            {
                input[k] = -1;
            }
        }
    }
    cout << "{ ";
    for (int k = 0; k < size; k++)
    {
        if (input[k] != -1)
        {
            cout << input[k] << ",";
        }
    }
    cout << " }";
    return 0;
}