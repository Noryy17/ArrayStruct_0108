#include <iostream>
using namespace std;

struct mahasiswa{
    string nim;
    string nama;
    string alamat;
};

int main (){
    mahasiswa mhs;

    mhs.nim = "20240140001";
    mhs.nama = "Abra";
    mhs.alamat = "Kasihan";

    cout << "Masukkan NIM = ";
    cin >> mhs.nim;
    cout << "Masukkan Nama";
    cin >> mhs.nama;
    cout << "Masukkan Alamat";
    cin >> mhs.alamat;

    cout << endl;
    cout << "data mahasiswa" << endl;

    cout << "NIM =" << mhs.nim << endl;
    cout << "nama =" << mhs.nama << endl;
    cout << "alamat =" << mhs.alamat << endl;
}