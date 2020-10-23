#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float num[20], sum = 0.0, average;

    cout << "Enter the numbers of data: ";
    cin >> n;
    cout << "\n";

    while (n > 20 || n <= 0)
    {
        cout <<endl<< "Error! number should in range of (20)." << endl;
        cout << "Enter the number again: ";
        cin >> n;
    }

    for(i = 0; i < n; ++i)
    {
        cout << "Enter number: ";
        cin >> num[i];
        sum += num[i];
    }

    average = sum / n;
    cout << "Average = " << average;
    cout << "\n";

cout << "By: Axyl Matt F. Llido";
    return 0;
}
