﻿#include <iostream>

using namespace std;

enum States{
on, off, error, readcoor, movefor, turn, turnr, turnl, startcl, stopcl};

class Human {
public: 

    int x = 0, y = 0;

    int enterCoor() {
        cout << "Enter coordinats: ";
        cin >> x >> y;
        switch (state) {
        if (!(cin >> x >> y) || (x < 0 && y < 0))
            States state = error;
        States state = readcoor;
        }
    }
};

class Robot:public Human {
public:

    int a = 0;

    int move(int x1 = 0, int y1 = 0) {
        while (x1 != x && y1 != y) {
            if (a = 0)
            {
                States state = movefor;
                y1 = y;
                x1 = x;
            }
            if (a = 1 || a = 3)
            { 
                States state = turnr; 
                if (y = 0)
                    break;
                else a = 0;
            }
            if (a = 2)
            {
                States state = movefor;
                if (x = 0)
                    break;
                else a = 0;

            }
        }
    }
    int turn() {
        if (x > 0 && y = 0)
        {
            a = 1;
        }
        if (x > 0 && y = 5)
        {
            a = 2;
        }
        if (x = 5 && y > 0)
        {
            a = 3;
        }
        States state = turn;
    }
    int clean() {
        States state = startcl;
    }
    int stop() {
        States state = stopcl;
    }
    int off() {
        States state = off;
    }
    int on() {
        States state = on;
    }
};

int main() {
    Human man;
    Robot robo;
    man.enterCoor();
    while (States state == error)
    {
        States state = off;
        man.enterCoor();
    }
    while (true)
    {
        int x = 1;
        switch (x)
        {
        case 1:

            robo.turn();
            break;

        case 2:

            robo.move();
            break;

        case 3:

            robo.clean();
            break;

        case 4:

            robo.stop();
            break;

        case 5:

            robo.off();
            break;

        case 6:

            robo.on();
            break;
        }
    }
    

}