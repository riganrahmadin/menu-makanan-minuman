#include <iostream>

using namespace std;

int main()
{   
    int x;
    int kode;
    int total;
    int ulang;
    char lagi='Y';
   while ((lagi=='Y')||(lagi=='y'))
{

    cout<<"--------counter makanan happy----------"<<endl;
    cout<<"--------daftar  menu-------------------"<<endl;
    cout<<"---makanan----"<<endl;
    cout<<"1.Nasi goreng|| 10.000"<<endl;
    cout<<"2.Mie goreng || 5.000"<<endl;
    cout<<"3.bakso jumbo|| 11.000"<<endl;
    cout<<"4.Mie ayam   || 12.000"<<endl;
    
    cout<<"----minuman---"<<endl;
    cout<<"6.soda gembira||7.000"<<endl;
    cout<<"7.es coklat||   8.000"<<endl;
    cout<<"8.jus jeruk||6.000"<<endl;
    cout<<"masukkan pilihan makanan:";
    cin>>kode;
    cout<<"banyak porsi"<<endl;
    cin>>total;
    cout<<"masukkan pilihan minuman:";
    cin>>kode;
    cout<<"banyak porsi"<<endl;
    cin>>total;
    cout<<("Apakah Anda akan memasukkan data lagi [Y/T]:");
    cin>>(lagi);
    cout<<("\n");
}
    
    if(total>=2){
        cout<<"selamat anda mendapatkan diskon 10%"<<endl;
    }
    else if(total<=1){
    cout<<"tidak mendapatkan diskon"<<endl;
    }
   
    cout<<"Terimah Kasih Atas Kunjungan Anda"<<endl;
   
    return 0;
}
