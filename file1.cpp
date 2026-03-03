// library
#include <iostream>
using namespace std;

// deklarasi global
int p, l, luas;

//Implementasi Prosedur dan Fungsi
void input() {
    cout << "Masukkan panjang = ";
    cin >> p;
    cout << "Masukkan lebar = ";
    cin >> l;
    }
int luasPersegi () {
    return p * l;
}

void output (){
    cout << "Hasilnya = " << luasPersegi() << endl;
    cout << "terima kasih";
}

int main (){
    input();
    output();
} // selesai