// library
#include <iostream>
using namespace std;

// deklrasi global
int p, l;

// Implementasi Prosedur dan Fungsi
void input () {
    cout << "Masukkan Panjang = ";
    cin >> p;
    cout << "Masukkan lebar = ";
    cin >> l;
}

float jumlah (float a, float b, float c){
    return a + b + c;
}

int luasPersegiP(int a, int b){
    return a * b;
}
