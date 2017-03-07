#ifndef __PLAYER_H__
#define __PLAYER_H__

#include <iostream>
#include "common.hpp"
#include "board.hpp"
#include "heuristic.hpp"
#include "search.hpp"

using namespace std;

using namespace asimov;

class Player {
private:
    Heuristic *h;
    Search *s;
    Side side;
    int ply;
public:
    Board *current;
    Player(Side side);
    Player(Side side, bool testingMinimax);
    ~Player();

    Move *doMove(Move *opponentsMove, int msLeft);
};

#endif
