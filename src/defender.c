// Standard headers
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Internal headers
#include "direction.h"
#include "position.h"
#include "spy.h"

// Main header
#include "defender.h"

// Macros
#define UNUSED(x) (void)(x) // Auxiliary to avoid error of unused parameter

/*----------------------------------------------------------------------------*/
/*                              PUBLIC FUNCTIONS                              */
/*----------------------------------------------------------------------------*/

direction_t execute_defender_strategy(
    position_t defender_position, Spy attacker_spy) {
 
  UNUSED(defender_position);
  UNUSED(attacker_spy);

  int seed;
  static int id=0;

  if(id==0){
        srandom(time(NULL));
        id=1;
  }

  seed=random()%2;
  switch(seed)
  	{
        
	case 1:
                return (direction_t) DIR_UP;
                break;
        default:
                return (direction_t) DIR_DOWN;
                break;
	}
}

/*----------------------------------------------------------------------------*/
