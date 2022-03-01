#include <iostream>
using namespace std;
int main() {
	int matA[2] [2] = {4, 8, 2, 10}, matB[2] [2] = {-5, 4, 8, -12}, hasil[2][2];
    int i, j, k, m=2, n=2, p=2, q=2, jumlah = 0;
    
    if(n != p){
        cout << "Matriks tidak dapat dikalikan satu sama lain.\n";
    }else{
    	cout<<"Matriks A"<<endl;
		for (int i=0; i<m; i++){
			for (int j=0; j<n; j++){
				cout<<matA[i][j]<<" ";
			}
		cout<<endl;
		}
    }
    
	cout<<"Matriks B"<<endl;
	for (int i=0; i<p; i++){
		for(int j=0; j<q; j++){
			cout<<matB[i][j]<<" ";
		}
		cout<<endl;
	}
   
    for(i = 0; i < m; i++){
      for(j = 0; j < q; j++){
        for(k = 0; k < p; k++){
          jumlah = jumlah + matA[i][k] * matB[k][j];
        }
        hasil[i][j] = jumlah;
        jumlah = 0;
      }
    }
    cout << "Hasil perkalian matriks: \n";
    for(i = 0; i < m; i++){
      for(j = 0; j < n; j++){
        cout << hasil[i][j] << "\t";
      }
      cout << endl;
    }
    
    system("PAUSE");
    return 0;
}
  
  

