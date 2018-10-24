#include <iostream>
#include <windows.h>
#include <mmsystem.h>
using namespace std;


int main(){
    string pName;
    cout << "please enter a player name: ";
    cin >> pName;

    int secretNum = 7;
    int guess;
    int guessCount =0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    while(secretNum != guess && !outOfGuesses){
        if(guessCount < guessLimit){
            cout << "Enter Guess: ";
            cin >> guess;
            guessCount++;

        } else {
            outOfGuesses = true;
        }

    }
    if(outOfGuesses){
        cout << "~~HAHA~~ Shame on you you lose, thats is a diffrent cookie isnt it! ";
        PlaySound(TEXT("die.wav"), NULL, SND_SYNC);
    } else {
    cout << "~~TADA~~ hey " << pName << " Did you know? you are the WINNER! ";
    PlaySound(TEXT("yay.wav"), NULL, SND_SYNC);
    }



    return 0;
}
