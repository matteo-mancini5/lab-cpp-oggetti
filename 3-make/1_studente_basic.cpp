#include <iostream>
#include <string>

using namespace std;

/***************************************************************************
 *                      Utilizzo della classe studente                    */

class Studente {
public:
    string nome;
    int eta;
    float media;

    void stampaStudente(){
        cout << "Nome: " << nome << ", eta: " << eta << ", media: " << media << endl;
    }
};

int main()
{
    Studente Mario;
    Studente Maria;

    Studente *P;
    P=&Maria;
    P -> eta= 18;
    P -> media = 8;
    P -> nome= "Maria";

    Mario.nome= "Mario";
    Mario.eta=17;
    Mario.media=7;
    
    Mario.stampaStudente();
    P-> stampaStudente();
    
    return 0;
}
