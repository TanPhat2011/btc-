#include <iostream>
using namespace std;
void sochia2va3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0 && i % 3 == 0)
            cout << "So " << i << " chia het cho 2 va 3" << endl;
    }
}
int main(){
    int n;
    cout << "Nhap n: ";
    cin >> n;
    sochia2va3(n);
    return 0;
}