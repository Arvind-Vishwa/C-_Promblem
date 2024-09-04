// palindrome
#include <iostream>
using namespace std;
bool isPalindrome(char arr[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i <= j)
    {
        if (arr[i] == arr[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
            break;
        }
    }
    return true;
}
int main()
{
    char arr[100];
    cin >> arr;
    auto store = isPalindrome(arr, 5);
    cout << store;
}