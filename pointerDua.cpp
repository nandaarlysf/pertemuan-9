#include <iostream>
using namespace std;

class Mahasiswa
{
    public:
     int nim;
     void ShowNim()
    {
        cout<<"NO Induk="<<nim<<endl;
    } 
};

int main()
{
   Mahasiswa *mhs= new mahasiswa{1};//pointer Object mhs
   mhs->nim=2;
   mhs->showNim();
   delete mhs;
   return 0; 
}
