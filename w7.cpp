#include <iostream>
#include <string>
using namespace std;

class Player {
private:
    int id;
    string name;
    int score;

    public:
    // Default constructor
    Player() {
        id = 16114;
        name = "Max";
        score = 100;
    }

    