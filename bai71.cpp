#include <iostream>
#include <math.h>
using namespace std;
void soNguyento(int n)
{
    int SNT = 0;
    if (n < 2)
        cout << n << " khong phai la so nguyen to!";
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
                SNT++;
        }
        if (SNT == 0)
            cout << n << " la so nguyen to!";
        else
            cout << n << " khong phai la so nguyen to!";
    }
}
int main(){
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    soNguyento(n);
    return 0;
}