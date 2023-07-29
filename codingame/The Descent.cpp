#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * https://www.codingame.com/ide/puzzle/the-descent
 * 
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the mountain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
 **/

int main()
{

    // game loop
    while (1) {
        int max_n = 0;
        int min_n = 0;
        int index = 0;

        for (int i = 0; i < 8; i++) {

            int mountain_h; // represents the height of one mountain.
            cin >> mountain_h; cin.ignore();
            min_n = mountain_h;

            if (min_n > max_n){
                max_n = min_n;
                index = i;
            } 
        }
        
        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
        //cout << "4" << endl; // The index of the mountain to fire on.
        cout << index << endl;
        
    }
}