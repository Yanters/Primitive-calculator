#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>

using namespace std;
double zmiena1,zmiena2;
char wybor;
int main()
{
   for(;;){
    cout << "MENU GLOWNE" << endl;
    cout << "-----------------" << endl;
    cout << "1.DODAWANIE" << endl;
    cout << "2.ODEJMOWANIE" << endl;
    cout << "3.MNOZENIE" << endl;
    cout << "4.DZIELENIE" << endl;
    cout << "5.WYJSCIE" << endl << endl;





    cout << "|Wybierz opcje z menu|"<< endl ;
        wybor=getch();

        switch(wybor)
        {
        case '1':
            system("cls");
            cout << "Wybrales opcje: DODAWANIE"<<endl ;
            cout << "Podaj liczbe nr 1: " ;

    if(!(cin>>zmiena1))
    {
        cerr << "To nie jest liczba" ;
        exit(0);
    }
    cout << "Podaj liczbe nr 2: " ;

    if(!(cin>>zmiena2))
    {
        cerr << "To nie jest liczba" ;
        exit(0);
    }
            cout << "Suma = " << zmiena1 + zmiena2;
        break;
        case '2':
            system("cls");
            cout << "Wybrales opcje: ODEJMOWANIE"<<endl ;
            cout << "Podaj liczbe nr 1: " ;

    if(!(cin>>zmiena1))
    {
        cerr << "To nie jest liczba" ;
        exit(0);
    }
    cout << "Podaj liczbe nr 2: " ;

    if(!(cin>>zmiena2))
    {
        cerr << "To nie jest liczba" ;
        exit(0);
    }
            cout << "Odejmowanie = " << zmiena1 - zmiena2;
        break;
        case '3':
            system("cls");
            cout << "Wybrales opcje: MNOZENIE"<<endl ;
            cout << "Podaj liczbe nr 1: " ;

    if(!(cin>>zmiena1))
    {
        cerr << "To nie jest liczba" ;
        exit(0);
    }
    cout << "Podaj liczbe nr 2: " ;

    if(!(cin>>zmiena2))
    {
        cerr << "To nie jest liczba" ;
        exit(0);
    }
            cout << "Iloczyn = " << zmiena1 * zmiena2;
        break;
        case '4':
            system("cls");
            cout << "Wybrales opcje: DZIELENIE" <<endl;
            cout << "Podaj liczbe nr 1: " ;

    if(!(cin>>zmiena1))
    {
        cerr << "To nie jest liczba" ;
        exit(0);
    }
    cout << "Podaj liczbe nr 2: " ;

    if(!(cin>>zmiena2))
    {
        cerr << "To nie jest liczba" ;
        exit(0);
    }
            cout << "Iloraz = " << zmiena1 / zmiena2;
        break;
        case '5':

        exit(0);

        break;
        default:
            cout << "Zly wybor" ;
        }







    getch();
    system("cls");

    }
    return 0;
}
