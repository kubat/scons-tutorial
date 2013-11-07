#include <iostream>

#include <ncurses.h>

using namespace std;

int main(int, char**) {
    cout << "Hello world!" << endl;
    cout << "ncurses version: " << NCURSES_VERSION << endl;
    return 0;
}
