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
string dekripsi_chipcher(string chipchertext,int keys){
	keys = keys % 26;
	for(int i = 0; i < chipchertext.length(); i++){
		if(chipchertext[i] >= 'a' && chipchertext[i] <= 'z'){
			chipchertext[i] = (chipchertext[i] - 'a' - keys + 26) % 26 + 'a';
		}else if(chipchertext[i] >= 'A' && chipchertext[i] <= 'Z'){
			chipchertext[i] = (chipchertext[i] - 'A' - keys + 26) % 26 + 'A';
		}else{
			chipchertext[i];
		}
	}
	return chipchertext;
}

int main(){
	//name enkripsi;
	cout << "-----ENKRIPSI CAESAR-----" << endl;
	//variabel untuk caesar
	string plaintext;
	int keys;
	//input
	cout << "Masukan plain teks: ";
	getline(cin, plaintext);
	cout << "Masukan kunci pergeseran(angka): ";
	cin >> keys;
	//menunjukan hasil enkripsi caesar
	string hasil_enkripsi = enckripsi_chipcher(plaintext,keys);
	cout << "Hasil enkipsi: " << hasil_enkripsi << endl;
	//menunjukan hasil dekrispsi
	string chipchertext = hasil_enkripsi;
	string hasil_dekripsi = dekripsi_chipcher(chipchertext,keys);
	cout << "Konfirmasi Plain Teks: "  << hasil_dekripsi << endl;
	
	return 0;
}
