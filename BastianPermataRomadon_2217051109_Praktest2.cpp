#include <iostream>
using namespace std;
/* Praktest 2, Pertemuan 3.
Pada hari ini Pak Dengklek mendapatkan pesan dari atasannya untuk membuat sebuah program
yang akan menampilkan kata dari angka yang diinputkan. Jika input yang diberikan adalah
angka 1 maka akan mengoutputkan "satu", begitupun dengan angka 2, dan angka 3. Untuk input
angka yang lebih daripada 3 itu maka akan mengoutputkan "bilangan lebih besar dari tiga".

Format Input
Input terdiri dari 1 angka integer

Format Output
Kata aari angka yang diinputkan, atau kalimat "bilangan lebih besar dari tiga"
*/

int main(){
	int input;
	cin>>input;
	if(input==1){
		cout<<"Satu ";
	} else if(input==2){
		cout<<"Dua ";
	} else if(input==3){
		cout<<"Tiga";
	} else if(input>=4){
		cout<<"Bilangan lebih besar dari Tiga ";
	}
}
