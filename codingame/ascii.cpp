#include <iostream>
#include <string>

using namespace std;

int letterCase(const int &h, const int &w, string &letter);
int letterA(int &h, int &w);

int main()
{

    int h(0), w(0);
    string letter, word;
    cout << "letter height: " << endl;
    cin >> h;
    cout << "letter width: " << endl;
    cin >> w;
    cout << "Letter to print: " << endl;
    cin >> letter;

    letterCase(h, w, letter);

    // cout << endl;
    // cout << "Try to print word: " << endl;
    // cin >> word;
}

void letterCase(const int &h, const int &w, string letter)
{

    switch (letter)
    {
    case ("a"):
        // int *arr = 
        letterA(h, w);
        // print(arr, h, w);
        break;

    default:
        break;
    }
}



int letterA(int &h, int &w)
{
    int **arr = new int *[h];
    for (int i = 0; i < h; i++)
    {
        arr[i] = new int[w];
    }

    for (int i = 0; i < h; i++)
    {
        cout << endl;
        for (int j = 0; j < w; j++)
        {
            cout << "*";
        }
    }

    return arr;
}