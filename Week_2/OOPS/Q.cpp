#include <iostream>
using namespace std;

class Playable {
public:
    virtual void play() = 0;
};

class Veena : public Playable {
public:
    void play() override {
        cout << "Playing Veena" << endl;
    }
};

class Saxophone : public Playable {
public:
    void play() override {
        cout << "Playing Saxophone" << endl;
    }
};

int main() {
    // a. Veena object
    Veena v;
    v.play();

    // b. Saxophone object
    Saxophone s;
    s.play();

    // c. Using Playable pointer
    Playable* p;

    p = &v;
    p->play();

    p = &s;
    p->play();

    return 0;
}