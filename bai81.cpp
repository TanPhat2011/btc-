#include <iostream>
using namespace std;
int main()
{
    int n, so_cuoi, so_luong = 0;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    while (n > 0)
    {
        so_cuoi = n % 10;
        if (so_cuoi % 2 != 0)
            so_luong++;
        n /= 10;
    }
    cout << "So luong cac so le la: " << so_luong;
}