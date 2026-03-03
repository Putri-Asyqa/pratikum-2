#include <iostream>
using namespace std;

//deklarasi variable 
float jarijari;
float phi = 3.14159;
//bagian fungsi
void awal(){
    cout << "Masukkan jari-jari lingkaran = ";
    cin >> jarijari;
}
//fungsi proses
float luas (float jari_jari, float phi){
    return phi * jarijari * jarijari;
}
void akhir (){
    cout << "Hasil luas untuk lingkaran dengan jari-jari " << jarijari <<" Adalah: " <<luas(jarijari, phi);

}
int main (){
    awal();
    akhir();
}