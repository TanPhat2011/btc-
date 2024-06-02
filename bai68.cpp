#include <iostream>
#include <math.h>
using namespace std;
void tinhTich(int n)
{
    int tich = 1;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            tich *= i;
    }
    cout << "Tich tat ca cac uoc so cua so nguyen duong " << n << " la: " << tich << endl;
}
int main(){
int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    tinhTich(n);
    return 0;
}