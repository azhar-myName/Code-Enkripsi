#include <iostream>
#include <string>

using namespace std;

//dekripsi text
string dekripsiTeks(string chipher_text,string keys){
	string hasil = chipher_text;
	int loop_keys = keys.size();
	for(int i = 0; i < chipher_text.length(); i++){
		chipher_text [i] = chipher_text[i] ^ keys[i % loop_keys];
	}
	return chipher_text;
}

//enkripsi text dengan xor

string enkripsiTeks(string hasil_dekripsi,string keys){
	string plain_Text = hasil_dekripsi;
	int loop_keys = keys.size();
	for(int i = 0; i < hasil_dekripsi.length(); i++){
		plain_Text[i] = hasil_dekripsi[i] ^ keys[i % loop_keys];
	}
	return plain_Text;
}

int main(){
	//nama enkripsi
	cout << "-----DEKRIPSI XOR-----" << endl;
	//variabel untuk enkripsi xor
	string chipher_text;
	string keys;
	//input
	cout << "Masukan Teks: ";
	getline(cin, chipher_text);
	cout << "Masukan Keys: ";
	getline(cin, keys);
	//variabel output
	string hasil_dekripsi = dekripsiTeks(chipher_text,keys);
	cout << "Hasil Dekripsi: " << hasil_dekripsi << endl;
	string hasil_enkripsi = enkripsiTeks(hasil_dekripsi,keys);
	cout << "Konfirmasi Chipher Teks: " << hasil_enkripsi<< endl;
	
	return 0;
}
