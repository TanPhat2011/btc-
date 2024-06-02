#include <iostream>
using namespace std;
int main()
{
    int n, so_cuoi, tich = 1;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    while (n > 0)
    {
        so_cuoi = n % 10;
        if (so_cuoi % 2 != 0)
            tich *= so_cuoi;
        n /= 10;
    }
    cout << "Tich cac so le la: " << tich;
}