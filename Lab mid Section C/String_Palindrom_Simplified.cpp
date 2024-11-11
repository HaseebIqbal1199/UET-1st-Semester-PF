#include <iostream>
#include <string>
using namespace std;

int main() {
    string input = "ollo";
    int size = input.length() - 1;
    string reversed = "";
    for (int i = size ; i >= 0; i--)
    {
        reversed += input[i];
    }
        
    if(input == reversed)
    {
        cout << "String is Palindrom";
    }
    else
    {
        cout << "String is not Palindrom";   
    }
    
    return 0;
}