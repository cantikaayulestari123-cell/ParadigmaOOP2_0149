#include <iostream>
using namespace std;

class RekeningBank {
public:
    virtual void potongAdmin() = 0;
};

class RekeningSyariah : public RekeningBank {
private:
    string noRek;
    double saldo;

public:
    RekeningSyariah(string no, double saldoAwal) {
        noRek = no;
        saldo = saldoAwal;
    }