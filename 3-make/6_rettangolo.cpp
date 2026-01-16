#include <iostream>

using namespace std;

 /********************************************************************************************
 *                                  Implementazione classe Rettangolo                        *     
 *                                                                                           *
 *   Implementare una classe Rettangolo, che modelli la figura geometrica                    *
 *   Implementarla in maniera coerente ai seguenti requisiti:                                *
 *   - si vuole calcolare l'area e il perimetro del rettangolo                               *
 *   - si vuole stampare le informazioni del rettangolo                                      *
 *                                                                                           *
 *********************************************************************************************/


class Rettangolo {

private:
    float lato1;
    float lato2;

public:
    
    Rettangolo() {
        lato1 = 0;
        lato2 = 0;
    }

   
    void setLato1(float l1) {
        if (l1 > 0)
            lato1 = l1;
    }

    void setLato2(float l2) {
        if (l2 > 0)
            lato2 = l2;
    }

   
    float getLato1() {
        return lato1;
    }

    float getLato2() {
        return lato2;
    }

    float getPerimetro() {
        return 2 * (lato1 + lato2);
    }

    float getArea() {
        return lato1 * lato2;
    }

    
    void stampaRettangolo() {
        cout << "Lato 1: " << lato1 << endl;
        cout << "Lato 2: " << lato2 << endl;
        cout << "Perimetro: " << getPerimetro() << endl;
        cout << "Area: " << getArea() << endl;
    }
};

int main() {

    Rettangolo r;

    r.setLato1(3);
    r.setLato2(5);

    r.stampaRettangolo();

    return 0;
}
