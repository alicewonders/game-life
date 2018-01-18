#include "initCell.h"

namespace Life{
	Cell::Cell(char state) : state('.') {}

	char Cell::get_state(){
		return state;
	}

	void Cell::set_state(char st){
		state = st;
	}
}