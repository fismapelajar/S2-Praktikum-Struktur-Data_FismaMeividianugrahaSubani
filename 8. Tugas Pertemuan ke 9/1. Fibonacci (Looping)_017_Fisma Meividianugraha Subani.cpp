#include <iostream>
using namespace std;

// Penyelesaian Fibonacci dengan Cara Looping
int main(){
	 // Inisialisasi Variabel 
    int batas, f1 = 0, f2 = 1, selanjutnya = 0;

    cout << "Masukan Batas Deret Bilangan Fibonacci :  ";
    cin >> batas;
	cout<<endl;
	 // Mencetak hasil deret bilangan fibonacci
	cout << "Deret Fibonacci: ";
	
    for (int i = 1; i <= batas; i++)
    {
         // Mencetak dua deret bilangan fibonacci (Kasus Dasar).
        if(i == 1)
        {
            cout << " " << f1 <<", ";
            continue;
        }
        if(i == 2)
        {
            cout << f2 << ", ";
            continue;
        }
         // Proses Fibonacci (Rumus)
        selanjutnya = f1 + f2;
         // Mencetak hasil deret bilangan fibonacci (Selanjutnya).
        cout<< selanjutnya;
		f1 = f2;
        f2 = selanjutnya;
         // Menampilkan tanda koma atau titik setelah Bil. Fibonacci
        if(i<batas){
        	cout << ", ";
		} else{
			cout << ".";
		}
        
    }

    return 0;
}
