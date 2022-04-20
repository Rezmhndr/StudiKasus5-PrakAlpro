#include <iostream>
#include <string>
using namespace std;

class sks{
	public:
		void input();
		int rekursif(int x,int y);
		void output();
		
		
		
	private:
		
		int harga = 125000;
		int sks2[100];
		string matkul[100];
		string nama;
		int hsks, nim, jumsks, jumatkul;
};

int sks::rekursif(int x,int y){
	
	hsks=125000;
	if (jumsks == 0){
		return 0;
	}
	else {
		return  hsks+rekursif(hsks, jumsks-1);
	}
}

void sks::input(){
	cout << "Masukkan Nama : ";
	getline(cin, nama);
	cout << "Masukkan NIM: "; cin >> nim;
	cout << "Masukkan Jumlah matkul yang diinginkan :"; cin >> jumatkul;
	
	for(int i=0; i < jumatkul ; i++){
			cout<< " Nama Mata Kuliah : " ; cin >> matkul[i];
					
	}
	
	for (int j=0; j<jumatkul;j++){
		cout<< matkul[j] << " Jumlah SKS       : " ; cin >> sks2[j];
	}
}

void sks::output(){
	cout << endl;
	cout << "Nama: " << nama << endl;
	cout << "NIM: " << nim << endl;
	cout << "Jumlah matkul yang diinginkan :" << jumatkul << endl;
	cout << endl;
	for(int i=0; i < jumatkul ; i++){
			cout<< "Mata Kuliah : " ; cout << matkul[i] << endl;
					
	}
	
	cout << endl;
	
	for (int j=0; j<jumatkul;j++){
		cout<< matkul[j] << " Jumlah SKS       : " ; cout << sks2[j] << endl;
	}
	
	for (int j=0; j<jumatkul;j++){
		jumsks = sks2[j];	
	for (int j=0; j<jumatkul;j++){
		jumsks = sks2[j] + sks2[j];
	}
		cout<< "total sks = " << jumsks;  
	}

	
	
	int diskon = 0.2 * 125000;
	int akhir = harga - diskon;
	
	cout<<akhir;	
}

int main(){

  int y=0,x;
	sks d;
	d.input();
  d.rekursif(x,y);
	d.output();
	
	
	
	return 0;
}