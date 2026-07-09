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

    // Constructor with values
        // Constructor with values
    Player(int i, string n, int s) {
        id = i;
        name = n;
        score = s;
    }
        // Show player info
    void displayDetails() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Score: " << score << endl;
    }
        // Update score
    void updateScore(int newScore) {
        score = newScore;
    }
};