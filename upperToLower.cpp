#include <iostream>
#include <string>
using namespace std;
void convertUpperToLower(char ch)
{
    ch = ch - 'A' + 'a'; // converting formula
    cout << ch << endl;
}
void convertLowerToUpper(char ch)
{
    ch = ch - 'a' + 'A';
    cout << ch << endl;
}
void convertLToUArray(char arr[])
{
    for (int i = 0; i < 10; i++)
    {
        char ch = arr[i];
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - 'a' + 'A';
        }
        arr[i] = ch;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i];
    }
}
int main()
{
    char ch = 'A';
    char arr[1000];
    cin >> arr;
    convertUpperToLower(ch);
    convertLowerToUpper('b');
    convertLToUArray(arr);
}