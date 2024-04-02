#include<iostream>
#include<string>

using namespace std;

struct DetailAlamat
{
    string desa;
    string kota;
};

struct Mahasiswa
{
    string nim;
    string nama;
    DetailAlamat alamat;
    string umur;
};
int main(){
    Mahasiswa mhs[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "nomor mahasiswa : ";
        getline(cin, mhs[i].nim);
        cout << "nama mahasiswa : ";
        getline(cin, mhs[i].nama);
        cout << "alamat mahasiswa : ";
        cout << "\t nama desa = ";
        cin >>  mhs[i].alamat.desa;
        cout << "\t nama kota = ";
        cin >> mhs[i].alamat.kota;
        cout << "umur mahasiswa : ";
        cin >> mhs[i].umur;
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "\n nim : " << mhs.nim;
        cout << "\n nama : " << mhs.nama;
        cout << "\n alamat : " << mhs.alamat.desa;
        cout << "\n alamat : " << mhs.alamat.kota;
        cout << "\n umur : " << mhs.umur;
    }
}