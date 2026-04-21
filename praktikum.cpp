#include <iostream>
using namespace std;

class Barang{
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void tampilkanData(){
        cout << "Nama Barang        : " << nama << endl;
        cout << "Jumlah Barang      : " << jumlah << endl;
        cout << "Kategori Barang    : " << kategori << endl;
        cout << "Tanggal Produksi   : " << tanggalProduksi << endl;
        cout << "-----------------------------" << endl;
    }
};

int main(){

    Barang elektronik;
    elektronik.nama = "TV";
    elektronik.jumlah = 30;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "12-02-2025";

    Barang nonElektronik;
    nonElektronik.nama = "Pintu";
    nonElektronik.jumlah = 80;
    nonElektronik.kategori = "Non Elektronik";
    nonElektronik.tanggalProduksi = "05-01-2025";

    cout << "Data Barang Elektronik" << endl;
    elektronik.tampilkanData();

    cout << "Data Barang Non Elektronik" << endl;
    nonElektronik.tampilkanData();

    return 0;
}