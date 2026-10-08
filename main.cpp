#include <iostream>
using namespace std;

int main() {
    string nama,sekolah,ulang;
do{
    cout<<"Selamat Datang di SMKN 5 Malang"<<endl;
    cout<<"Masukkan Nama Anda ";
    cin>>nama;
    cout<<"Masukkan Nama Sekolah SMP Anda ";
    cin>>sekolah;
    cout<<"Nama Anda ";
    cout<<nama<<endl;
    cout<<"Nama Sekolah Anda ";
    cout<<sekolah<<endl;
    cout<<"Tekan y/Y untuk mengulang";
    cin>>ulang;
}
    while(ulang=="y"||ulang=="Y");
    system("pause");
    return 0;
}
    
