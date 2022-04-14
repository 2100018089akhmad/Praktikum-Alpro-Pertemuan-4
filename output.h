using namespace std;

class Output
{
    public :
      void cetak()
    {
      cout<<"Uang Saku Bulanan Andi adalah : "<< data_file[0] <<endl;
      cout<<"PENGELUARAn/n"<<endl;
      cout<<"Dalam Berapa Bulan : "<< data_file[1] <<endl;
      cout<<"Berapa Kali Pengeluaran Bulan Ke : "<< data_file[2] <<endl;
      cout<<"Keluar Berapa : "<< data_file [3] <<endl;
      cout<<"Uang Tabungan " <<bulan<< "BUlan Terakhir Saat Ini : "<< data_file[4] <<endl;
    }

    private : 
      ifstream ambil_data;
      string data_file[50];
      int index[0];
      int bulan;
};