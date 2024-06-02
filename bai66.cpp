#include <iostream>
#include <string>
using namespace std;

void timUocChan(int n) {
    string kqua = "";
    for (int i = 2; i < n; i++) {
        if (n % i == 0 && i % 2 == 0)
            kqua += to_string(i) + " ";
    }
    cout << kqua << "la uoc cua " << n << endl;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    timUocChan(n);
    return 0;
}
