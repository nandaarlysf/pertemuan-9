#include <iostream>
using namespace std;
class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout<<"No Induk ="<<nim<<endl;
    }
};
int main(){
    mahasiswa mhs{1};//object
    mhs.showNim();

    mahasiswa &refmhs=mhs;//pointer Reference refMhs
    refmhs.nim=2;//Member Access operator
    mhs.showNim();

    mahasiswa*pMhs=&mhs;
    pMhs->nim=3;
    pMhs->showNim();
    return 0;
}