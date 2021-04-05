#ifndef __MACHINE_H__
#define __MACHINE_H__

#include <string>
#include <algorithm>
#include "state.h"

class machine
{
private:
    void next();
    void prev();
    void move(const movement&);

public:
    std::map<int, state> states;
    std::string input;
    int header, state_id, accept_id;

    machine() {}
    machine(std::string input);
    ~machine() {}

    void add_movement(
            int  origin_state_id,
            char read           ,
            char write          ,
            char movement_char  ,
            int destiny_state_id
    );
    void set_input(std::string input);
    bool run();
    
};

#endif // __MACHINE_H__