// Standard headers
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Internal headers
#include "direction.h"
#include "position.h"
#include "spy.h"

// Main header
#include "attacker.h"

// Macros
#define UNUSED(x) (void)(x) // Auxiliary to avoid error of unused parameter

/*----------------------------------------------------------------------------*/
/*                              PUBLIC FUNCTIONS                              */
/*----------------------------------------------------------------------------*/

direction_t execute_attacker_strategy(
    position_t attacker_position, Spy defender_spy) {
  UNUSED(attacker_position);
  UNUSED(defender_spy);

  // TODO: Implement Attacker logic here
  int seed;
  static int id=0;
  if(id==0){
  	srandom(time(NULL));
	id=1;
  }
  seed=random()%10;
  switch(seed)
  	{
	case 1:
		return (direction_t) DIR_RIGHT;
		break;
	case 2:
		return (direction_t) DIR_RIGHT;
		break;
	case 3: 
		return (direction_t) DIR_UP_RIGHT;
		break;
	case 4: 
		return (direction_t) DIR_UP_RIGHT;
		break;
	case 5:
		return (direction_t) DIR_DOWN_RIGHT;
		break;
	case 6:
		return (direction_t) DIR_DOWN_RIGHT;
		break;
	case 7:
		return (direction_t) DIR_UP;
		break;
	case 8:
	       return (direction_t) DIR_LEFT;	
		break;
	case 9:
		return (direction_t) DIR_DOWN;
		break;
	default:
		return (direction_t) DIR_DOWN_LEFT;
		break;


  	}
}

/*----------------------------------------------------------------------------*/
