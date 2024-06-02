#include <iostream>
using namespace std;
int main()
{
    int n, so_cuoi, tich = 1;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    while (n > 0)
    {
        int SNT = 0;
        so_cuoi = n % 10;
        for (int i = 2; i <= so_cuoi; i++)
        {
            if (so_cuoi % i == 0)
                SNT++;
        }
        if (SNT == 1 && so_cuoi > 1)
            tich *= so_cuoi;
        n /= 10;
    }
    cout << "Tich cac chu so nguyen to la: " << tich;
}