#include <iostream>
using namespace std;

// Penyelesaian Fibonacci dengan Cara Rekursif    
int Fibonacci(int nilai) {
	 //Kasus Dasar
    if (nilai == 0 || nilai ==1){
        return nilai;
     //Kasus Rekursif (Rumus)
    } else {
    	return (Fibonacci(nilai-1) + Fibonacci(nilai-2));
      }
    }
    
int main() {
     // Inisialisasi Variabel  
    int batas, nilai= 0;
     // Input Nilai Batas Deret Bil. Fibonacci
	cout << "Masukan Batas Deret Bilangan Fibonacci :  ";
    cin >> batas;
     // Mencetak hasil deret bilangan fibonacci
	cout << "Deret Fibonacci: ";
    for (int i = 1; i <= batas; i++){
		cout << Fibonacci(nilai);
        nilai++;
          // Menampilkan tanda koma atau titik setelah Bil. Fibonacci
        if(i<batas){
        	cout << ", ";
		} else{
			cout << ".";
		}
    }
   
	return 0;
}
