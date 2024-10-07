// Online C++ compiler to run C++ program online
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
    int face1=0,face2=0,face3=0,face4=0,face5=0,face6=0,i=1,random;
    srand(time(0));
    while(i<=70)
    {
        random = rand()%6+1;
        if(random == 1)
        {
            face1++;
        }
        else if(random == 2)
        {
            face2++;
        }
        else if(random == 3)
        {
            face3++;
        }
        else if(random == 4)
        {
            face4++;
        }
        else if(random == 5)
        {
            face5++;
        }
        else if(random == 6)
        {
            face6++;
        }
        else
        {
            cout << "Something Went Wrong";
        }
        i++;
    }
    cout << "frequency of face 1: " << face1 << endl;
    cout << "frequency of face 2: " << face2 << endl;
    cout << "frequency of face 3: " << face3 << endl;
    cout << "frequency of face 4: " << face4 << endl;
    cout << "frequency of face 5: " << face5 << endl;
    cout << "frequency of face 6: " << face6 << endl;
    return 0;
}