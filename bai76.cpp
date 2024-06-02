#include <iostream>
using namespace std;
int main()
{
    int n, so_cuoi, SNT = 0, tong = 0;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    while (n > 0)
    {
        SNT = 0;
        so_cuoi = n % 10;
        for (int i = 2; i <= so_cuoi; i++)
        {
            if (so_cuoi % i == 0)
                SNT++;
        }
        if (SNT == 1 && so_cuoi > 1)
            tong += so_cuoi;
        n /= 10;
    }
    cout << "Tong cac chu so nguyen to la: " << tong;
}