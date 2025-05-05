#include <iostream>
#include <string>
using namespace std;

class siswa;
class orang
{
private:
    string nama;

 public:
    void setname(string pNama);
    friend class siswa;
};

class siswa 
{
 private:
    int id;

 public:
    void setid (int pId);
    void displayall(orang &a);
};
void orang :: setname (string pName)
{
    nama = pName;
}
void siswa :: setid(int pId)
{
    id =pId;
}
void siswa::displayall(orang &a)
{
    cout << id << endl << a.nama;
}
int main ()
{
    orang joko;
    joko.setname("joko susilo");
    siswa joko_siswa;
    joko_siswa.setid(1);
    joko_siswa.displayall(joko);
    return 0;
}

