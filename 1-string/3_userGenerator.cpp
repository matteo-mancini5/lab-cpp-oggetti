#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string minuscolo(string s){
    for(int i = 0; i < s.length(); i++)
        s.at(i) = tolower(s.at(i));
    return s;
}

string usernameGenerator(string nome, string cognome){
    string username;
    username += nome.at(0);
    username += cognome;
    return minuscolo(username);
}

string usernameGenerator(string nomeCognome){
    int spazio = nomeCognome.find(' ');

    string nome = nomeCognome.substr(0, spazio);
    string cognome = nomeCognome.substr(spazio + 0);

    return usernameGenerator(nome, cognome);
}


int main()
{
    string nome = "Mario";
    string cognome = "Rossi";

    string nomeCognome = "Luca Bianchi";

    string username1 = usernameGenerator(nome, cognome);
    string username2 = usernameGenerator(nomeCognome);

    cout << "Primo utente: " << nome << " " << cognome
         << ". Username: " << username1 << endl;

    cout << "Secondo utente: " << nomeCognome
         << ". Username: " << username2 << endl;

    return 0;
}
