#include <iostream>
using namespace std;

//deklarasi array tanpa ukuran,wajib di isi data
int nilai[]={1,2,3};
//deklarasi array dengan ukuran,di isi data awal
int skor[4]={12,24,48,64};
//deklarasi array dengan ukuran,tanpa nilai awal
string nama[3];

int main () {
    //Menampilkan isi array pada index tertentu
    cout << "Tampilkan skor ke 3 = " << skor [2] << endl;
    //Mengisi array pada index tertentu
    skor[2] = 100;
    cout << "Tampilkan skor ke 3 = " << skor [2] << endl;

    //mengisi array dengan loop for
    for(int n = 0; n < 3; n++){
        cout << "Nama Mahasiswa ke-" << n+1 << " = ";
        cout << "Nama Mahasiswa = ";
        cin >> nama [n]; 
        }
        
        cout << endl;
        //Menampilkan isi Array
        for(int n = 0 ; n < 3 ; n++){
            cout << "Data ke-" << n+1 << endl;
            cout << "Data Mahasiswa = " << nama[n] << endl;
        }
    }