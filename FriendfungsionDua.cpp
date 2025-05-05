#include <iostream>
using namespace std;

class pelajar;
class manusia
{
 public:
    void shownilaipelajar(pelajar &x);
    void shownilaipelajardua(pelajar &y);
};

class pelajar 
{
 private:
        int nilai;

 public:
    pelajar() {nilai =100; }
    friend void manusia :: shownilaipelajar(pelajar &x);
};

void manusia :: shownilaipelajar(pelajar &x)
{
    cout << x.nilai;
}
//void manusia :: shownilaipelajardua(pelajar &y)
//{
//   cout << y.nilai;
//}

int main()
{
    manusia budi;
    pelajar pbudi;
    budi.shownilaipelajar(pbudi);
    return 0;
}