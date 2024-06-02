#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Nhap so nguyen a va b: ";
    cin >> a >> b;
    for (int i = a; i <= a * b; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            cout << "Boi chung nho nhat cua a va b la: " << i;
            break;
        }
    }
}