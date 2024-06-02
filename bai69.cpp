#include <iostream>
#include <math.h>
using namespace std;
void soLuong(int n)
{
    int so_luong = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            so_luong++;
    }
    cout << "So luong cac uoc so cua so nguyen duong " << n << " la: " << so_luong << endl;
}
int main(){
    int n;
    cout << "Nhap so nguyen nguyen duong n: ";
    cin >> n;
    soLuong(n);
    return 0;
}