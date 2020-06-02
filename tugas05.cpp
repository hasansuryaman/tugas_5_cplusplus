#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int nilai, pangkat, hasil;
    cout <<"Inputkan Nilai Yang Ingin Dipangkatkan : ";
    cin>>nilai;
    cout <<"Inputkan Nilai Pangkat : ";
    cin>>pangkat;
    hasil = pow(nilai,pangkat);
    cout <<"Hasil Per Pangkatan : " <<hasil <<endl;
}
