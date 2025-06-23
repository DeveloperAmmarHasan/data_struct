#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(int x)
{
    if (x < 0)
        return false;
    long rev = 0;
    int num = x;

    while (num != 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    return (rev == x);
}
int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    bool pali = isPalindrome(num);
    if (pali)
    {
        cout << "The number is palindrome " << endl;
    }
    else
    {
        cout << "The number is not palindrome " << endl;
    }
    return 0;
}