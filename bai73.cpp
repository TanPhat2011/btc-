#include <iostream>
using namespace std;
void sochia5va8(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i % 5 == 0 && i % 8 != 0)
            cout << "So " << i << " chia het cho 5 va khong chia het cho 8" << endl;
    }
}
int main(){
 int n;
    cout << "Nhap n: ";
    cin >> n;
    sochia5va8(n);
    return 0;
}