
#include <iostream>
using namespace std;

int main() {
    const int size = 6;
    int arr[size] = {1, 2, 3, 4, 5, 6};
    int result[size] = {};
    int sum = 0;
    
    for(int i = 0; i < size; i++)
    {
        sum = 0;
        for(int j=0; j<=i ;j++)
        {
            sum += arr[j];
        }
        result[i] = sum;
    }
    
    for(int k=0;k<size;k++)
    {
        cout << result[k] << " ,";
    }
    return 0;
}