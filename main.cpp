#include <iostream>
#include <random>
using namespace std;

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {

    cout << "Hey welcome to the game, press exit if you wanna quit the game! and type anything then enter to continue the game\n\n";
    while (true) {
        string s;
        cin >> s;
        if (s != "exit") {
            random_device rd;
            mt19937_64 gen(rd());
            uniform_int_distribution<> dis(1, 3);

            int randomval = dis(gen);

            cout << "\nHello there! wanna play a game? Let's just play rock paper and scissors!\n Type 1 for Rock \n Type 2 for Paper \n Type 3 for Sissor \n" ;
            int a;
            cin >> a;
            if (randomval == 1) {
                cout << "Computer Played Rock!\n";
                if (a == 2) cout << "You Win!\n";
                else if (a == 3) cout << "You Lose!\n";
                else cout << "Draw!\n";
            }
            else if (randomval == 2) {
                cout << "Computer Played Paper!\n";
                if (a == 3) cout << "You Win!\n";
                else if (a == 3) cout << "You Lose!\n";
                else cout << "Draw!\n";
            }
            else if (randomval == 3) {
                cout << "Computer Played Sissor!\n";
                if (a == 2) cout << "You Win!\n";

                else if (a == 1) cout << "You Lose!\n";
                else cout << "Draw!\n";
            }
        }
        else break;

    }
    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.