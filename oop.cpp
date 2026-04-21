#include <iostream>
using namespace std;

class Mahasiswa{
    public:
        int nim;
        string nama;
        float nilai;
        void printData(){
            cout<<"NIM = "<< nim <<endl;
            cout<<"NAMA = "<< nama <<endl;
            cout<<"NILAI = "<< nilai <<endl;
        }
};
int main(){
    Mahasiswa mhs1;

    mhs1.nim = 111;
    mhs1.nama = "Joko Susilo";
    mhs1.nilai = 75.5;
    mhs1.printData();
}