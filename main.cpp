#include <iostream>

using namespace std;

int main()
{
    int array_size;
    cin >> array_size;
    int* ptr = new int[array_size];
    for(int i=0 ; i<array_size ; i++)
    {
        cin >> ptr[i];
    }
    for (int j=0 ; j<array_size ; j++)
    {
        cout << ptr[j] << " ";
    }
    cout << endl;

    delete[] ptr;

    return 0;
}
