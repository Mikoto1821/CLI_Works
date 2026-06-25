#include <iostream>
#include <string>
using namespace std;

void playerScore() {
        if (score >= 3) {
            cout << "game finished" << endl;
        } else {
            cout << "game still ongoing! " << endl;
        }
}

int playerLevel(int xp) {
    return xp / 8;
}


int main() {

   playerScore(9);

   int result = playerLevel(100); 
    cout << "player level is: " << result << endl;
   


   return 0;
}