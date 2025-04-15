#include <iostream>
#include <string>
using namespace std;

struct detailalamat{
    string desa;
    string kota;
};

struct mahasiswa{
    string nim;
    string nama;
    detailalamat alamat;
};

int main (){
    mahasiswa mhs[2];

    
    for(int n = 0; n < 2 ; n++){

    cout << "Masukkan NIM = ";
    cin >> mhs[n].nim;
    cin.ignore();
    cout << "Masukkan Nama";
    getline (cin , mhs[n].nama);
    cin >> mhs[n].nama;
    cout << "Masukkan Alamat Desa";
    cin >> mhs[n].alamat.desa;
    cout << "Masukkan Alamat Kota";
    cin >> mhs[n].alamat.kota;
}

    cout << endl;
    cout << "data mahasiswa" << endl;


    for(int n = 0;n < 2; n++){
    cout << "NIM =" << mhs[n].nim << endl;
    cout << "nama =" << mhs[n].nama << endl;
    cout << "alamat desa =" << mhs[n].alamat.desa << endl;
    cout << "alamat kota =" << mhs[n].alamat.kota << endl; 
}
}