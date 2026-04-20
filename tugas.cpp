#include <iostream>
using namespace std;

class Barang{
public :
    int jumlah;
    string nama;
    string kategori;
    string tanggalProduksi;

    void tampilkanSpesifikasi(){
        cout<<"Nama           : "<<nama<<endl;
        cout<<"Jumlah         : "<<jumlah<<endl;
        cout<<"Kategori       : "<<kategori<<endl;
        cout<<"Tanggal Produksi : "<<tanggalProduksi<<endl;
    }
}; //batas class

int main(){
    Barang Elektronik;//object
    Elektronik.nama = "Lenovo";
    Elektronik.jumlah = 14;
    Elektronik.kategori = "Laptop";
    Elektronik.tanggalProduksi = "2026-04-29";

    Barang nonElektronik;//object
    nonElektronik.nama = "Jacket";
    nonElektronik.jumlah = 24;
    nonElektronik.kategori = "Pakaian";
    nonElektronik.tanggalProduksi = "2026-04-29";

    Elektronik.tampilkanSpesifikasi();
    cout<<endl;
    nonElektronik.tampilkanSpesifikasi();
}