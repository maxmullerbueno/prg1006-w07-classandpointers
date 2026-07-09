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

int main {
// Default constructor
Player player1;
    Player *ptr1 = &player1;
    ptr1->displayDetails();

    cout << endl;

// Constructor with values
    Player player2(1, "Max", 100);
    Player *ptr2 = &player2;
    ptr2->displayDetails();

    cout << endl;

// Update score via pointer
    ptr2->updateScore(250);
    ptr2->displayDetails();

    return 0;

}