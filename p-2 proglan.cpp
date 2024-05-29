#include <iostream>
using namespace std;

class basic_statt {
private:
    int hp;
    int deff;
    int att;

public:

    basic_statt(int darah, int defend, int Attack) : hp(darah), deff(defend), att(Attack) {}

    virtual void displayinfo() {
        cout << "darah: " << hp << ", defend: " << deff << ", Attack: " << att << endl;
    }

    int gethp() {
        return hp;
    }
    int getdeff(){
        return deff;
    }
    int getatt() {
        return att;
    }
};

class greatsword : public basic_statt {
public:
    greatsword(int darah, int defend, int Attack) : basic_statt(darah, defend, Attack) {
    }

    void displayinfo() override {

        cout << "Darah Alice : " << gethp() << endl;
        cout << "Defend Alice : " << getdeff() << endl;
        cout << "Attack Alice : " << getatt() << endl;
    }
};

int main() {

    greatsword Alice(100, 2, 3);
    Alice.displayinfo();

    return 0;
}

