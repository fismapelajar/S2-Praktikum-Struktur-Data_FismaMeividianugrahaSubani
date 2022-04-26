// Implementasi Program C++ Insertion Sort
#include <iostream>
using namespace std;

// Fungsi Void Insertion_Sort untuk mengurutkan array
void Insertion_Sort(int array[], int nilai)
{
	/* Deklarasi variabel loop dan j digunakan dalam proses perulangan.
	Variabel key digunakan untuk penyisipan nilai*/
    	int loop, key, j;
    	// Looping dari 1 sampai array kurang dari nilai
    	for (loop = 1; loop < nilai; loop++)
    	{
    	// Proses penyisipan nilai (Insert nilai)
        key = array[loop];
        j = loop - 1;
        // Membandingkan nilai lebih kecil dipindah ke depan/kiri (Sort nilai dari kecil ke besar)
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    	}
}
 
// Fungsi Void Cetak_Array untuk menampilkan hasil sorting array
void Cetak_Array(int array[], int nilai)
{
	// Menampilkan kalimat
	cout << "Hasil Array yang sudah di Sorting adalah : "<<endl;
    	// Deklarasi variabel loop digunakan untuk perulangan
	int loop;
    	// Looping dari 0 sampai array kurang dari nilai
    	for (loop = 0; loop < nilai; loop++)
    	{
    	// Menampilkan hasil sorting array [] (terurut dari kecil ke besar) 
    	cout <<"["<< array[loop]<<"]";
	}
    	cout << endl;
}

// Fungsi Main untuk Mencetak Output Program
int main()
{
	// Deklarasi variabel nilai sebagai input masukan
	int nilai;
	// Input batas jumlah array (Input pertama)
	cout << "Masukan Batas Jumlah Array :";
	cin >> nilai;
	cout<<endl;
	
	// Input nilai array berdasarkan looping (Input kedua)
	cout << "Masukan " << nilai << " Nilai Array :"<<endl;
    	int array[nilai];
    
    	// Looping dari 0 sampai array kurang dari nilai
    	for(int loop=0; loop < nilai; loop++)
	{
		cin >> array[loop];
	}
	cout<<endl;
    
    // Memanggil fungsi void Insertion_Sort dengan variabel array dan nilai 
    Insertion_Sort(array, nilai);
    // Memanggil fungsi void Cetak_Array dengan variabel array dan nilai 
    Cetak_Array(array, nilai);
 
    return 0;
}
