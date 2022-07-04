#include <iostream>
using namespace std;

class sk9 {
 public :
  void input();
	void proses();
  void output();
 private:
	string kls[20], nim[20], nama[20];
	string tabel[5][20];
	int baris,kolom;
  int m,i,j;
 	int k=0;
};

void sk9::input(){
  cout<<"Masukan Banyak Data : ";cin>>m;
  cout<<endl;
  for(i=0;i<m;i++){
  cout<<"Masukan Data Kelas ke-"<<i+1<<" : ";cin>>kls[i];
  cout<<"Masukan Data NIM ke-"<<i+1<<" : ";cin>>nim[i];
  cout<<"Masukan Data Nama ke-"<<i+1<<" : ";
  cin.ignore();
  getline(cin, nama[i]);
  cout<<endl;
  }
}

// isi array 1D
void sk9::proses(){
	// mengisi array 1D ke array 2D
	for( i=0; i<m; i++){
			tabel[i][0] = kls[k];
			tabel[i][1] = nim[k];
			tabel[i][2] = nama[k];
			k++;
	}
	cout<<endl;
}

void sk9::output(){
  cout<<"Hasil data Array 1 dimensi\n\n";
	
  cout<<"Kelas :\n";
	for(i=0; i<m; i++){
    cout<<kls[i]<<"\n";
  }
	cout<<endl;
  
  cout<<"Nim  :\n";
  for(i=0; i<m; i++){
    cout<<nim[i]<<endl;
  }
	cout<<endl;
	
  cout<<"Nama :\n";
  for(i=0; i<m; i++){
    cout<<nama[i]<<endl;
  }
   
  cout<<"\n\nSetelah dirubah menjadi array 2 dimensi\n\n";
  cout<<"|KELAS\t| NIM\t\t|NAMA\t\t|"<<endl<<"|";
  for(i=0; i<m; i++){
    for(j=0; j<3; j++){
      cout<<tabel[i][j]<<"\t|\t";
    }
    cout<<endl<<"|";
  }  
}

int main(){
  sk9 x;
  x.input();
  x.proses();
  x.output();
  return 0;
}