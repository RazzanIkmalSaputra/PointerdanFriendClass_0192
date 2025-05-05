#include <iostream>
using namespace  std;

class dosen{
    public:
    string nama;
    void tampilnama(){
        cout << "namanya adalah " << nama << endl;
    }
};
class staf{
    public:
    int nidn;
};
int main (){
    dosen ds;
    ds.nama = "giga";
    ds.tampilnama();

    dosen &dsref = ds;
    dsref.nama = "joko";
    cout << "alamat memori = " << &dsref << endl;
    dsref.tampilnama();

    dosen *pds = &ds;
    pds->nama = "reza";
    cout << "alamat memori = " << pds << endl;
    pds->tampilnama();

    int a = 5;
    int b = 3;
    int *c = &a;
    *c = 9;
    cout << endl;
    cout << a << endl;

    cout << "alamat memori a = " << &a << endl;
    cout << "alamat memori c = " << c << endl;
    cout << "cetak c = " << *c << endl;
    c = &b;
    cout << "alamat memori c = " << c << endl;
    cout << "cetak c = " << *c << endl;
}
