#include <iostream>
#include <string>

using namespace std;

//enkripsi caesar
string enckripsi_chipcher(string plaintext,int keys){
	keys = keys % 26;
	for(int i = 0; i < plaintext.length(); i++){
		if(plaintext[i] >= 'a' && plaintext[i] <= 'z'){
			plaintext[i] = (plaintext[i] - 'a' + keys) % 26 + 'a';
		}else if(plaintext[i] >= 'A' && plaintext[i] <= 'Z'){
			plaintext[i] = (plaintext[i] - 'A' + keys) % 26 + 'A';
		}else{
			plaintext[i];
		}
	}
	return plaintext;
}

//dekripsi caesar
string dekripsi_chipcher(string chiphertext,int keys){
	keys = keys % 26;
	for(int i = 0; i < chiphertext.length(); i++){
		if(chiphertext[i] >= 'a' && chiphertext[i] <= 'z'){
			chiphertext[i] = (chiphertext[i] - 'a' - keys + 26) % 26 + 'a';
		}else if(chiphertext[i] >= 'A' && chiphertext[i] <= 'Z'){
			chiphertext[i] = (chiphertext[i] - 'A' - keys + 26) % 26 + 'A';
		}else{
			chiphertext[i];
		}
	}
	return chiphertext;
}

int main(){
	//name enkripsi;
	cout << "-----DEKRIPSI CAESAR-----" << endl;
	//variabel untuk caesar
	string chiphertext;
	int keys;
	//input
	cout << "Masukan dekripsi teks: ";
	getline(cin, chiphertext);
	cout << "Masukan kunci pergeseran(angka): ";
	cin >> keys;
	//menunjukan hasil dekripsi caesar
	string hasil_dekripsi = dekripsi_chipcher(chiphertext,keys);
	cout << "Hasil dekripsi:  " << hasil_dekripsi << endl;
	//menunjukan hasil dekrispsi
	string plaintext = hasil_dekripsi;
	string hasil_enkripsi = enckripsi_chipcher(plaintext,keys);
	cout << "Konfirmasi Chipher Text: "  << hasil_enkripsi << endl;
	
	return 0;
}
