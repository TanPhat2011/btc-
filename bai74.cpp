#include <iostream>
#include <math.h>
using namespace std;
void 
{
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    if (n < 2)
        cout << n << " khong phai la so nguyen to!";
    else
    {
        for (int i = 2; i <= n; i++)
        {
            int SNT = 0;
            for (int j = 2; j <= i; j++)
            {
                if (i % j == 0)
                    SNT++;
            }
            if (SNT == 1)
                cout << i << " la so nguyen to!" << endl;
        }
    }
}