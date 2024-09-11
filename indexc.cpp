#include <iostream>
using namespace std;

int divisible(int n, int a, int b)
{
    int c1 = n / a;
    int c2 = n / b;

    int c3 = n / (a * b);
    return c1 + c2 - c3;
}

int main()
{
    int n, a, b;
    cout << "Enter values for n, a, and b: ";
    cin >> n >> a >> b;

    cout << "Count of numbers divisible by " << a << " or " << b << " up to " << n << " is: " << divisible(n, a, b) << endl;

    return 0;
}
