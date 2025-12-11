#include <iostream>
#include <string>

using namespace std;

void lunghezzaStringa(string stringa){
    // .size()
    int x = stringa.size();
    cout << "La lunghezza della stringa e': " << x << endl;
    cout << endl;
    // .length()
    int y = stringa.length();
    cout << "La lunghezza della stringa e': " << y << endl;
    cout << endl;
}


void trovaCiao(string stringa){
    // .find()
    if (int z = stringa.find("ciao"))
    { cout << "La parola ciao NON e' presente" << endl; }
    else {cout << "La parola ciao e' presente" << endl;}

}

void sostituisciPizzaConPasta(string stringa) {

    string str1 = "pizza";
    cout << "Stringa prima di replace: " << str1 << endl;

    str1.replace(0, str1.length(), "pasta");
    cout << "Stringa dopo replace: " << str1 << endl;
    cout << endl;
}


void stampaPrimaParola(string stringa){
    // .find()
    int s = stringa.find(" ");
    // .substr()
    stringa = stringa.substr(0, s);
    cout << "Prima parola stringa: " << stringa << endl;
    }

void aggiungiGiovanni(string frase){
    // .insert()
    int x = frase.size();
    frase.insert(x, " Giovanni!");
    cout << "La nuova frase e': " << frase << endl;
}

int main()
{

    string str;

    cout << "Inserire valore stringa: ";
    getline(cin, str);


    lunghezzaStringa(str);
    trovaCiao(str);
    sostituisciPizzaConPasta(str);
    stampaPrimaParola(str);
    aggiungiGiovanni(str);



    return 0;
}
