#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, so_cuoi; // 456 5 là SNT 579 5, 7 là SNT

    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    while (n > 0)
    {
        so_cuoi = n % 10; // Gán giá trị số cuối = giá trị n % 10 hiện tại;
        int SNT = 0;
        for (int i = 2; i <= so_cuoi; i++)
        {
            if (so_cuoi % i == 0)
                SNT++;
        }
        if (SNT == 1 && so_cuoi > 1)
        {
            cout << "Chu so nguyen to la: " << so_cuoi << endl;
        }
        n = n / 10; // Gán giá trị số n = n / 10 ví dụ 169 / 10 = 16
    }
}