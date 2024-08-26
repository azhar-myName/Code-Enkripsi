#include <iostream>
#include <string>

using namespace std;

//enkripsi text dengan xor
string enkripsiTeks(string plain_Text,char keys){
	string hasil = plain_Text;
	for(int i = 0; i < plain_Text.length(); i++){
		hasil[i] = plain_Text[i] ^ keys;
	}
	return hasil;
}
//dekripsi text
string dekripsiTeks(string hasil_enkripsi,char keys){
	string plain_Text = hasil_enkripsi;
	for(int i = 0; i < hasil_enkripsi.length(); i++){
		plain_Text[i] = hasil_enkripsi[i] ^ keys;
	}
	return plain_Text;
}

int main(){
	//variabel untuk enkripsi xor
	string plain_Text;
	char keys;
	//input
	cout << "Masukan Teks: ";
	getline(cin, plain_Text);
	cout << "Masukan Keys: ";
	cin >> keys;
	//variabel output
	string hasil_enkripsi = enkripsiTeks(plain_Text,keys);
	cout << "Hasil Enkripsi: " << hasil_enkripsi << endl;
	string hasil_dekripsi = dekripsiTeks(hasil_enkripsi,keys);
	cout << "Hasil Dekripsi: " << hasil_dekripsi << endl;
	
	return 0;
}
