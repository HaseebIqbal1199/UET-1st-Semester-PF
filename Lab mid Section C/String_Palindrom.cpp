#include <iostream>
#include <string>
using namespace std;

int main() {
    string input = "meeow";
    int size = input.length() - 1;
    string reversed = "";
    int checks = 0;
    for (int i = size ; i >= 0; i--)
    {
        reversed += input[i];
    }

    
    for (int j = 0 ; j <= size; j++)
    {
        if(input[j] == reversed[j])
        {
            checks = j;
            continue;
        }
        else{
            break;
        }
    }
        
    if(checks == size)
    {
        
        cout << "String is Palindrom";
    }
    else
    {
        cout << "String is not Palindrom";   
    }
    
    return 0;
}