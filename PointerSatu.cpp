#include <iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    void shownim(){
        cout << "ni induk = " <<nim<<endl;
    }
};

int main (){
    mahasiswa mhs; //object mhs
    mhs.nim = 5;
    mhs.shownim(); //member acces operator

    mahasiswa &refmhs = mhs; //pointer reference refmhs
    refmhs.nim = 2; //member acces operator
    mhs.shownim();

    mahasiswa *pmhs = &mhs ;//pointer deference pmhs
    pmhs->nim =3;//arrow operator
    pmhs->shownim();
    return 0;
}



