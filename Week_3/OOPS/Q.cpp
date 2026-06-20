#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Abstract base class
class Compartment {
public:
    virtual string notice() = 0;
};

// First Class compartment
class FirstClass : public Compartment {
public:
    string notice() {
        return "First Class Compartment - Premium passengers only.";
    }
};

// Ladies compartment
class Ladies : public Compartment {
public:
    string notice() {
        return "Ladies Compartment - Reserved for women passengers.";
    }
};

// General compartment
class General : public Compartment {
public:
    string notice() {
        return "General Compartment - Open for all passengers.";
    }
};

// Luggage compartment
class Luggage : public Compartment {
public:
    string notice() {
        return "Luggage Compartment - Goods and luggage only.";
    }
};

class TestCompartment {
public:
    static void runTest() {
        Compartment* coach[10];

        srand(time(0));

        for (int i = 0; i < 10; i++) {
            int num = rand() % 4 + 1;

            if (num == 1) {
                coach[i] = new FirstClass();
            }
            else if (num == 2) {
                coach[i] = new Ladies();
            }
            else if (num == 3) {
                coach[i] = new General();
            }
            else {
                coach[i] = new Luggage();
            }
        }

        cout << "Notices for all compartments:\n\n";

        for (int i = 0; i < 10; i++) {
            cout << "Compartment " << i + 1 << " : "
                 << coach[i]->notice() << endl;
        }

        // Free memory
        for (int i = 0; i < 10; i++) {
            delete coach[i];
        }
    }
};

int main() {
    TestCompartment::runTest();
    return 0;
}