#include <iostream>
using namespace std;

class Proses
{
  friend ostream& operator<<(ostream&, Proses&);
  friend istream& operator>>(istream&, Proses&);

  public : 
    void pemasukan(){
	cout<<"Uang saku bulanan andi adalah :"; cin>>uangsaku;
	total=uangsaku;
}
void pengeluaran(){
	cout<<"PENGELUARAN"<<endl;
	cout<<"Dalam berapa bulan : "; cin>>bulan;
	total=uangsaku*bulan;
	for(int i=1;i<=bulan;i++){
		cout<<"Berapa kali pengeluaran bulan ke "<<i<<" : "; cin>>kali; 
		for(int j=1;j<=kali;j++){
			cout<<"Keluar berapa : "; cin>>keluar;
			cout<<"Untuk apa : "; cin>>untuk;
			total=total-keluar;
		}
	}
}
void uang_saat_ini(){
	sisa=total;
	cout<<"Uang Tabungan dalam "<<bulan<<" bulan terakhir saat ini : "<<sisa;
}

  private :
    ifstream ambil_data;
    ofstream tulis_data;
    int uangsaku;
    int keluar;
    int sisa;
    int bulan;
    int kali;
    int total;
    int totalkeluar;
    string untuk;
};