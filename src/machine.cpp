#include "../lib/machine.h"

machine::machine(std::string input) 
{
    this->input = input;
}

void machine::add_movement(
        int  origin_state_id,
        char read           ,
        char write          ,
        char movement_char  ,
        int destiny_state_id) 
{
    movement mov(write, destiny_state_id, movement_char);
    
    accept_id = std::max(accept_id, destiny_state_id);
    accept_id = std::max(accept_id, origin_state_id);

    states[origin_state_id].transitions[(read=='_'? ' ': read)] = mov;
}

void machine::next() 
{
    ++header;
    if(header == input.size())
    {
        input += " ";
    }
    return;
}

void machine::prev() 
{
    --header;
    if(header < 0)
    {
        header = 0;
    }
    return;
}

void machine::move(const movement& mov) 
{
    input[header] = mov.new_char;
    state_id = mov.index;
    mov.right? next() : prev();
    return;
}

void machine::set_input(std::string input) 
{
    this->input = input;
}

bool machine::run() 
{
    header = 0;
    state_id = 0;
    while(state_id != accept_id)
    {
        if(states[state_id].transitions.count(input[header]))
        {
            move(states[state_id].transitions[input[header]]);
        }
        else
        {
            return false;
        }
    }
    return true;
}
