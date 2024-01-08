#include <iostream>
using namespace std;
int main(){
    int height, i, j, val, k;
    char ch;
    cout << "Enter height of the triangle:";
    cin >> height;

    for (i = 1; i <= height; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i - j + 1 << " ";
        }
        cout << endl;
    }
    cout << endl;
}
