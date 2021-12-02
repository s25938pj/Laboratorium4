#include <iostream>
#include <algorithm>
#include <conio.h>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;


void Zadanie1()
{   
    cout << "[Zadanie 1]" << endl << endl;
    /*Znajdź największy element danej tablicy liczb całkowitych.
    Liczbę elementów tablicy i ich wartości pobierz od użytkownika.*/
    int max = 0;
    int n;
    cout << "Podaj liczbe indeksow" << endl << endl;
    cin >> n;
    int* tablica1 = new int[n] {};
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout<< "Podaj wartosc dla tablica[" << i << "] ";
        cin >> tablica1[i];
        if ( tablica1[i] > max )
        {
             max = tablica1[i];
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << tablica1[i] << " ";
    }
    cout << endl << endl << "Najwieksza liczba zbioru to: " << max << endl;
}
void Zadanie2()
{
    cout << endl << "[Zadanie 2]" << endl << endl;
    /*
    Napisz program, który wskazuje najczęściej występujący element 
    w tablicy liczb całkowitych. Liczbę elementów tablicy i ich wartości 
    pobierz od użytkownika.
    */
    int n;
    cout << "Podaj liczbe indeksow" << endl << endl;
    cin >> n;
    int* tablica1 = new int[n] {};
    cout << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << "Podaj wartosc dla tablica[" << i << "] ";
        cin >> tablica1[i];
    }
    int count = 0;
    cout << endl << "Najczesciej wystepujace elementy to: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (tablica1[i] == tablica1[j])
            {
                cout << tablica1[j] << " ";
            }
        }
    }
    cout << endl;
}
void Zadanie3()
{
    cout << endl << "[Zadanie 3]" << endl << endl;
    /*
    Napisz program, który w zadeklarowanej tablicy dwuwymiarowej 10x10 umieszcza:
    - w pierwszej kolumnie liczby od 0 do 9;
    - w drugiej sumę tych liczb (np. 0+0, 1+1 itd..);
    (1 p.)
    * Część bonusowa:
    - w trzeciej – kwadraty tych liczb;
    - w czwartej – sumę numeru wiersza i numeru kolumny;
    - w piątej – wynik różnicy numeru wiersza i numeru kolumny;
    - w pozostałych kolumnach 0 (interpretacja graficzna tablicy poniżej)
    */
    const int n = 10;
    int tablica1[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            switch (i)
            {
            case 0:
                tablica1[i][j] = j;
                break;
            case 1:
                tablica1[i][j] = (j + j);
                break;
            case 2:
                tablica1[i][j] = (j * j);
                break;
            case 3:
                tablica1[i][j] = (i + 1) + (j + 1);
                break;
            case 4:
                tablica1[i][j] = (i + 1) - (j + 1);
                break;
            default:
                tablica1[i][j] = 0;
                break;
            }
            cout << tablica1[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    Zadanie1();
    Zadanie2();
    Zadanie3();

    return 0;
}