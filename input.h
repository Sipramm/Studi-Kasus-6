using namespace std;

class Input {
public:
	void cetak() {	cout << "Masukkan jumlah mahasiswa -> ";cin >> jmlhmhs;
    				cout << "Masukkan nama matakuliah -> ";cin >> makul;
    				system ("cls"); }
 	void toFile() {	cout<<"Masukkan nama mahasiswa yang\nmengambil mata kuliah "<<makul<<"["<<jmlhmhs<<"]\n";cout<<"------------------------------------\n";
 						char nama[jmlhmhs][20];
    					for(int i=1;i<=jmlhmhs;i++){cout<<"Mahasiswa ke-"<<i<<" : ";cin>>nama[i];}system ("cls");
					cout<<"Masukkan nilai tugas "<<makul<<"["<<jmlhmhs<<"]\n";cout<<"------------------------------------\n";
						int nilaitgs[jmlhmhs];
						for(int i=1;i<=jmlhmhs;i++){cout<<"Nilai mahasiswa ke-"<<i<<" : ";cin>>nilaitgs[i];}system ("cls");
					cout<<"Masukkan nilai UTS "<<makul<<"["<<jmlhmhs<<"]\n";cout<<"------------------------------------\n";
						int nilaiuts[jmlhmhs];
						for(int i=1;i<=jmlhmhs;i++){cout<<"Nilai mahasiswa ke-"<<i<<" : ";cin>>nilaiuts[i];}system ("cls");
					cout<<"Masukkan nilai UAS "<<makul<<"["<<jmlhmhs<<"]\n";cout<<"------------------------------------\n";
						int nilaiuas[jmlhmhs];
						for(int i=1;i<=jmlhmhs;i++){ cout<<"Nilai mahasiswa ke-"<<i<<" : ";cin>>nilaiuas[i];}system ("cls");
    				tulis_data.open("api.data.txt");
    					tulis_data<<jmlhmhs<<endl;
    					for(int i=1;i<=jmlhmhs;i++){tulis_data<<nama[i]<<endl;}
    					for(int i=1;i<=jmlhmhs;i++){tulis_data<<nilaitgs[i]<<endl;}
   						for(int i=1;i<=jmlhmhs;i++){tulis_data<<nilaiuts[i]<<endl;}
    					for(int i=1;i<=jmlhmhs;i++){tulis_data<<nilaiuas[i]<<endl;}
    					tulis_data << makul;
    				tulis_data.close();}
private:
  	ofstream tulis_data;
  	int jmlhmhs;
  	char makul[20];
};
