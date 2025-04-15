#include <iostream>
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
    mahasiswa mhs;

 

    cout << "Masukkan NIM = ";
    cin >> mhs.nim;
    cout << "Masukkan Nama";
    cin >> mhs.nama;
    cout << "Masukkan Alamat Desa";
    cin >> mhs.alamat.desa;
    cout << "Masukkan Alamat Kota";
    cin >> mhs.alamat.kota;

    cout << endl;
    cout << "data mahasiswa" << endl;

    cout << "NIM =" << mhs.nim << endl;
    cout << "nama =" << mhs.nama << endl;
    cout << "alamat desa =" << mhs.alamat.desa << endl;
    cout << "alamat kota =" << mhs.alamat.kota << endl;
}