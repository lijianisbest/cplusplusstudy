#include <iostream>
#include <string>
using namespace std;
const int SIZE = 5;
void display(const string sa[], int n);
int main()
{
    string list[SIZE]{"a", "b", "c", "d", "e"};
    display(list, SIZE);
    return 0;
}
void display(const string aa[], int n)
{
    for (size_t i = 0; i < SIZE; i++)
    {
        /* code */
        cout << aa[i] << " ";
    }
}