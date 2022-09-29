#include <iostream>
using namespace std;
/* Praktest  4 (lagi) pertemuan 5
Angka 0 sampai ke angka yang ditentukan
2 Angka integer dalam satu baris
Input pertama x adalah kelipatan
Input kedua n adalah batas dari rentang angka yang akan di cek

*/
int main (){
	
	/* Program paling dasar dari yang paling dasar */
	int x = 2;
	int a;
	int akhir = 1000;
	
	cout<<"Masukkan nilai dengan batas maksimum seribu"<<endl;
	cin>>a;

	if(akhir > 0 && akhir > a) {
	
	
	while(a<akhir){
		cout<<"Nilai n ke "<< a << " adalah "<< a * x <<endl;
		a++;
	/* Setiap nilai n dikali dua dimulai dari nilai yang dimasukkan */
	}

 } else {
 	cout<<"Tidak dapat diproses";
 }
}
