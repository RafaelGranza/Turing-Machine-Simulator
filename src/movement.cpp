#include "../lib/movement.h"

movement::movement(
            char write           ,
            int  destiny_state_id,
            char movement_char)
{
   new_char = (write == '_'? ' ': write);
   index    = destiny_state_id;
   right    = (movement_char == 'r');
}
