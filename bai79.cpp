#include <iostream>
using namespace std;
int main()
{
    int n, so_cuoi, tong = 0;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    while (n > 0)
    {
        so_cuoi = n % 10;
        if (so_cuoi % 2 == 0)
            tong += so_cuoi;
        n /= 10;
    }
    cout << "Tong cac so chan la: " << tong;
}