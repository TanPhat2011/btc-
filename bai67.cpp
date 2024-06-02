#include<iostream>
#include<math.h>
using namespace std;
void tinhTong(int n){
    int S=0;
    for(int i=1; i <= n; i++){
        if(n%i==0){
            S+=i;
        }
    }
    cout << "Tong cac uoc so cua " << n << "la: " << S << endl;
}
   int main(){
    int n; 
    cout << "Nhap n: ";
    cin >> n;
    tinhTong(n);
    return 0;
   }


