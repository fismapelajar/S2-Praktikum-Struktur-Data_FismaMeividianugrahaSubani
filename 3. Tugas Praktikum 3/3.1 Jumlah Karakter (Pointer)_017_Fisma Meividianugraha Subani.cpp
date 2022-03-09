#include<stdio.h>
#include<conio.h>

char kata[30];
int jumlah(char x[])
{
    int i;
    int *s;
    s=&i;
    *s=0;
    while( x[*s] != '\0')
    {
		i++;
    }
    return *s;
}
main ()
{
    printf("Tuliskan Kata: ");
    gets(kata);
    printf("Jumlah karakter: %d", jumlah(kata));
    getch ();
    return 0;
}
