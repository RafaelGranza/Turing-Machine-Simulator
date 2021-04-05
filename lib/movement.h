#ifndef __MOVEMENT_H__
#define __MOVEMENT_H__

class movement
{
public:
    char new_char;
    int index;
    bool right;

    movement() {}
    movement(
            char write           ,
            int  destiny_state_id,
            char movement_char  
    );
    ~movement() {}
};

#endif // __MOVEMENT_H__