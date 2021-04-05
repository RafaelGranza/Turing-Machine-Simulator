#ifndef __STATE_H__
#define __STATE_H__

#include <map>
#include "movement.h"

class state
{
public:
    std::map<char, movement > transitions;
    state() {}
    ~state() {}
};

#endif // __STATE_H__