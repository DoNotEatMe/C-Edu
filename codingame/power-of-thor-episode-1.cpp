#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include <cmath>

using namespace std;

/**
 * https://www.codingame.com/ide/puzzle/power-of-thor-episode-1
 *
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/

int main()
{
    int light_x;    // the X position of the light of power
    int light_y;    // the Y position of the light of power
    int initial_tx; // Thor's starting X position
    int initial_ty; // Thor's starting Y position
    cin >> light_x >> light_y >> initial_tx >> initial_ty;
    cin.ignore();

    int pass_y = light_y - initial_ty;
    int pass_x = light_x - initial_tx;

    // game loop
    while (1)
    {
        int remaining_turns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remaining_turns;
        cin.ignore();

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        // A single line providing the move to be made: N NE E SE S SW W or NW
        // cout << "SE" << endl;

        /**
         *   N = Y - 1
         *   NE = (Y - 1) (X + 1)
         *   E = X + 1
         *   SE = (Y + 1) (X + 1)
         *   S = Y + 1
         *   SW = (Y + 1) (X - 1)
         *   W = X - 1
         *   NW = (Y - 1) (X - 1)
         **/

        bool pass = pass_y != 0 && pass_x != 0;

        cerr << "current thor x." << pass_x << " y." << pass_y << endl;

        if (pass)
        {
            if (light_x > initial_tx && light_y > initial_ty)
            {
                cout << "SE" << endl;
                pass_x -= 1;
                pass_y -= 1;
                cerr << "x." << pass_x << " y." << pass_y << endl;
            }

            if (light_x > initial_tx && light_y < initial_ty)
            {
                cout << "NE" << endl;
                pass_x -= 1;
                pass_y += 1;
                cerr << "x." << pass_x << " y." << pass_y << endl;
            }

            if (light_x < initial_tx && light_y < initial_ty)
            {
                cout << "NW" << endl;
                pass_x += 1;
                pass_y += 1;
                cerr << "x." << pass_x << " y." << pass_y << endl;
            }

            if (light_x < initial_tx && light_y > initial_ty)
            {
                cout << "SW" << endl;
                pass_x += 1;
                pass_y -= 1;
                cerr << "x." << pass_x << " y." << pass_y << endl;
            }
        }

        if (!pass)
        {
            if (pass_y < 0)
            {
                cout << "N" << endl;
                pass_y -= 1;
            }
            if (pass_y > 0)
            {
                cout << "S" << endl;
                pass_y += 1;
            }

            if (pass_x < 0)
            {
                cout << "W" << endl;
                pass_x -= 1;
            }
            if (pass_x > 0)
            {
                cout << "E" << endl;
                pass_x += 1;
            }
        }
    }
}