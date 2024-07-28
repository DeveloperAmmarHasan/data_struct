#include "iostream"
using namespace std;
int main()
{
    int n;
    cout << "Enter n";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        // printing increasing numbers
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j << " ";
            j++;
        }
        // printing stars
        int k = 1;
        while (k <= i - 1)
        {
            cout << "*" << " ";
            k++;
        }
        // printing another star pattern
        int l = 1;
        while (l <= i - 1)
        {
            cout << "* ";
            l++;
        }
        // printing decreasing numbers
        int m = n - i + 1;
        while (m)
        {
            cout << m << " ";
            m--;
        }

        cout << endl;
        i++;
    }
}