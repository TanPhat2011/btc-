#include <iostream>
using namespace std;
void uocLonnhat(int n)
{
    int max;
    for (int i = n - 1; n > 0; i--)
    {
        if (n % i == 0)
        {
            cout << "Uoc so lon nhat la: " << i<< endl;
            break;
        }
    }
}
int main(){
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    uocLonnhat(n);
    return 0;
}