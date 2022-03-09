#include <stdio.h>
#include <conio.h>

int main(){

    int i,j,temp,tempmin, max,min;
	max = temp = tempmin = 0;

    int arr[10];
	min = arr[0];

    printf("Masukkan 10 angka:\n");

    for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
    }

    int *ptr1, *ptr2;
    ptr1 = arr;
    ptr2 = arr;

    for(i=1;i<10;i++){
		if(max <= *ptr1){
			temp = max;
			max = *ptr1;
			*ptr1 = temp;
		}
		ptr1++;
	}

    printf("MAX=%d\n",max);
    return 0;

}
