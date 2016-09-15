/**
    KELAS     : IF-39-01
    KELOMPOK  : 8
    NAMA(NIM) : [ Regita Anjani][1301154477] , [Yudha Tritama Gamadita][1301154309] , [Farisi Rahman][1301154225] , [Alan Maulana Ibrahim][1301154175]
**/

#include <iostream>
#include "orang.h"
#include "tanggal.h"
using namespace std;

orang o1, o2;
string nama;
int tgl, bln, thn,pilih,edit;
bool cek;

void Menu();
void rubah_tanggal();

int main() {
    cout << "Hello!" << endl;
    cout << "masukkan nama orang 1: ";
    cin>>nama;
    cout << "masukkan tanggal lahir orang 1: ";
    cin>>tgl;
    cout << "masukkan bulan lahir orang 1: ";
    cin>>bln;
    cout << "masukkan tahun lahir orang 1: ";
    cin>>thn;

    o1 = create_orang(nama, tgl,bln,thn);
    cek = cek_tanggal(o1.tgl_lahir);
    if (cek = true){
        show_orang(o1);
        cout<<endl;
    }
    else{
        cout<<"Maaf tanggal lahir yang anda inputkan salah.Silahkan ulangi"<<endl;
        return main();
    }

    cout << "masukkan nama orang 2: ";
    cin>>nama;
    cout << "masukkan tanggal lahir orang 2: ";
    cin>>tgl;
    cout << "masukkan bulan lahir orang 2: ";
    cin>>bln;
    cout << "masukkan tahun lahir orang 2: ";
    cin>>thn;

    o2 = create_orang(nama, tgl,bln,thn);
    cek = cek_tanggal(o2.tgl_lahir);
    if (cek = true){
        show_orang(o2);
        cout<<endl;
    }
    else{
        cout<<"Maaf tanggal lahir yang anda inputkan salah.Silahkan ulangi"<<endl;
        return main();
    }
    cout<< "selisih hari : "<<selisih_hari(o1.tgl_lahir,o2.tgl_lahir)<<" hari"<<endl;
    Menu();
    return 0;
}

void rubah_tanggal()
{
    cout << "Pilih data yang akan di ubah (1/2) : ";
    cin >> edit;
    if (edit = 1)
    {
        cout << "masukan tanggal : ";
        cin >> tgl;
        cout << "masukan bulan : ";
        cin >> bln;
        cout << "masukan tahun : ";
        cin >> thn;
        edit_tanggal(o1.tgl_lahir, tgl, bln, thn);
        cout << endl;
        show_orang(o1);
        cout << endl;
        cout << "tekan enter"<< endl;
        Menu();
    }
    else if (edit = 2)
    {
        cout << "masukan tanggal : ";
        cin >> tgl;
        cout << "masukan bulan : ";
        cin >> bln;
        cout << "masukan tahun : ";
        cin >> thn;
        edit_tanggal(o2.tgl_lahir, tgl, bln, thn);
        cout << endl;
        show_orang(o2);
        cout << endl;
        cout << "tekan enter "<<endl;
        Menu();
    }
    else
    {
        cout << "Maaf data yang anda input salah, silahkan ulangi lagi";
        rubah_tanggal();
    }

}
void Menu ()
{
    cout << "Main Menu" <<endl;
    cout << "1. Edit Tanggal Lahir"<<endl;
    cout << "2. Tampil Data  & selisih Tanggal lahir"<<endl;
    cout << "3. Exit"<<endl;
    cout << endl;
    cout << "Pilih: ";
    cin >> pilih;

    switch (pilih){
    case 1 :
        rubah_tanggal();
        break;
    case 2 :
        cout << "Data orang pertama"<<endl;
        show_orang(o1);cout << endl;
        cout << "data orang kedua"<<endl;
        show_orang(o2);cout << endl;
        cout<< "selisih hari : "<<selisih_hari(o1.tgl_lahir,o2.tgl_lahir)<<" hari"<<endl;
        cout<< endl;
        Menu();
        break;
    case 3 :
        cout << "Terima Kasih"<<endl;
        break;
    }
}

