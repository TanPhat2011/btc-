#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Nhap so nguyen duong a va b: ";
    cin >> a >> b;
    for (int i = a; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            cout << "Uoc chung lon nhat cua a va b la: " << i;
            break;
        }
    }
}