using namespace std;

class Input {
	public:
    void cetak(){
      cout <<"Berapa uang saku bulanan andi\n";
      cout <<"Berapa uang pengeluaran andi\n";
      cout <<"Berapa uang saat ini\n";
      cout <<"Uang saku :";cin >>uangsaku;
      cout <<"Pengeluaran : ";cin >>pengeluaran;
      cout <<"Uang saat ini :";cin >>uang;
    }

    void toFile(){
      tulis_data.open("pra_data/input.txt");
      tulis_data << uangsaku <<endl;
      tulis_data << pengeluaran;
      tulis_data << uang;
      tulis_data.close();
    }
private:
  ofstream tulis_data;
  int uangsaku,pengeluaran,uang;
};