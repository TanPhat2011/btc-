#include <iostream>
using namespace std;
int main()
{
    int n, so_luong = 0;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    cout << "So luong cac chu so chan cua so nguyen duong " << n << " la: ";
    while (n > 0)
    {
        int so_cuoi = n % 10;
        if (so_cuoi % 2 == 0)
            so_luong++;
        n /= 10;
    }
    cout << so_luong;
}