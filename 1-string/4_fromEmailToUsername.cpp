#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;
const int N = 12;

string emails[N] = {
    "marco.rossi@studio.alberghetti.it",
    "anna.bianchi@studio.alberghetti.it",
    "luca.verdi@studio.alberghetti.it",
    "giulia.moretti@studio.alberghetti.it",
    "alessandro.ferrari@studio.alberghetti.it",
    "chiara.galli@studio.alberghetti.it",
    "matteo.martinelli@studio.alberghetti.it",
    "sara.ricci@studio.alberghetti.it",
    "stefano.colombo@studio.alberghetti.it",
    "elena.sartori@studio.alberghetti.it",
    "gianluca.marini@studio.alberghetti.it",
    "marta.leone@studio.alberghetti.it"
};

string primoCarattereMaiuscolo(string &s) {
    if (!s.empty()) {
        s[0] = toupper(s[0]);
    }
    return s;
}

int main() {
    string nomiCognomi[N];

    for (int i = 0; i < N; i++) {
        string email = emails[i];

        int posChiocciola=email.find('@');
        string parte=email.substr(0, posChiocciola);

        int posPunto=parte.find('.');
        string nome=parte.substr(0, posPunto);
        string cognome=parte.substr(posPunto + 1);

        primoCarattereMaiuscolo(nome);
        primoCarattereMaiuscolo(cognome);

        nomiCognomi[i]=nome+" "+cognome;
    }
    cout << "Risultato:\n";
    for (int i = 0; i < N; i++) {
        cout << nomiCognomi[i] << endl;
    }
    return 0;
}
