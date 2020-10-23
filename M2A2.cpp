#include <iostream>
using namespace std;
int main()
{
    int n, i, g, r;

    cout << "Enter an integer: ";
    cin >> n;
    cout <<endl<< "Enter range: ";
    cin >> g;

    for (i = 1; i <= g; ++i) {
        r = n * i;
        cout << n << " * " << i << " = " << r <<endl;
    }
	cout << "By: Axyl Matt F. Llido";
    return 0;
}
