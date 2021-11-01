#include <iostream>
#include <string>
#include <windows.h>

struct Druzyny
{
	std::string nazwa;
	short pozycja;
	short punkty;
	short spotkania;
};

using namespace std;

std::string PL(std::string znak);
const Druzyny& Funkcja(Druzyny& Narodowa);
void Wyswietl(Druzyny& Struktura);

int main()
{
	string znak;
	Druzyny MS, MS1, MS2, MS3, MS4, MS5;

	MS = Funkcja(MS);
	MS1 = Funkcja(MS1);
	MS2 = Funkcja(MS2);
	MS3 = Funkcja(MS3);
	MS4 = Funkcja(MS4);
	MS5 = Funkcja(MS5);

    cout.width(1);
    cout << "| Lp.|";
    cout.width(20);
    cout.setf(ios_base::left, ios_base::adjustfield);
    cout << PL("Nazwa Drużyny") << "|";
    cout.width(1);
    cout << " M |";
    cout.width(1);
    cout << " Punkty\n";
    cout << "---------------------------------------\n";

    Wyswietl(MS);
    Wyswietl(MS1);
    Wyswietl(MS2);
    Wyswietl(MS3);
    Wyswietl(MS4);
    Wyswietl(MS5);
    cout << "---------------------------------------\n";

    return 0;
}

const Druzyny& Funkcja(Druzyny& Narodowa)
{
    char znak[50];
    cout << PL("Podaj pozycję drużyny - ");
    (cin >> Narodowa.pozycja).get();
    cout << PL("Podaj nazwę drużyny - ");
    getline(cin, Narodowa.nazwa);
    cout << PL("Podaj liczbę punktów drużyny - ");
    cin >> Narodowa.punkty;
    cout << PL("Podaj liczbę rozegranych spotkań - ");
    cin >> Narodowa.spotkania;

    if (cin)
        cout << PL("Dziękuję!!!\n\n");
    else {
        cout << PL("\n\nBłąd przy wprowadzaniu danych! Program zostanie zamknięty!");
        Sleep(4000);
        exit(0);
    }
    return Narodowa;
}

void Wyswietl(Druzyny& Struktura)
{
    ios_base::fmtflags ustawienia_domyslne;
    ustawienia_domyslne = cout.setf(ios_base::fixed);
    // cout.precision(0);
    cout.setf(ios_base::left, ios_base::adjustfield);
    cout.width(1);
    cout << "| " << Struktura.pozycja << ". |";
    cout.width(20);
    cout << Struktura.nazwa << "|";
    cout.setf(ios_base::internal, ios_base::adjustfield);
    cout.width(1);
    cout << " " << Struktura.spotkania << " ";
    cout.width(1);
    cout << "| " << Struktura.punkty << " |\n";
    cout.setf(ustawienia_domyslne);
}

std::string PL(std::string znak) {

    for (unsigned i = 0; i < znak.length(); i++) {
        switch (znak[i]) {
        case 'ą':
            znak[i] = static_cast <char>(165);
            break;

        case 'ć':
            znak[i] = static_cast <char>(134);
            break;

        case 'ę':
            znak[i] = static_cast <char>(169);
            break;

        case 'ł':
            znak[i] = static_cast <char>(136);
            break;

        case 'ń':
            znak[i] = static_cast <char>(228);
            break;

        case 'ó':
            znak[i] = static_cast <char>(162);
            break;

        case 'ś':
            znak[i] = static_cast <char>(152);
            break;

        case 'ź':
            znak[i] = static_cast <char>(171);
            break;

        case 'ż':
            znak[i] = static_cast <char>(190);
            break;

        case 'Ą':
            znak[i] = static_cast <char>(164);
            break;

        case 'Ć':
            znak[i] = static_cast <char>(143);
            break;

        case 'Ę':
            znak[i] = static_cast <char>(168);
            break;

        case 'Ł':
            znak[i] = static_cast <char>(157);
            break;

        case 'Ń':
            znak[i] = static_cast <char>(227);
            break;

        case 'Ó':
            znak[i] = static_cast <char>(224);
            break;

        case 'Ś':
            znak[i] = static_cast <char>(151);
            break;

        case 'Ź':
            znak[i] = static_cast <char>(141);
            break;

        case 'Ż':
            znak[i] = static_cast <char>(189);
            break;
        }
    }
    return znak;
}