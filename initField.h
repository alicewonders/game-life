#pragma once
#include "initCell.h"
#include <string>

namespace Life{
	class Field{
	private:
		int height;
		int width;
		Cell **prev;
		Cell **cell;
	public:
		Field(int, int);
		char checkNeighbors(int, int);
		//void fieldPrint();
		int countCells();
		void stepBack();
		void destroyAllCells();
		void createCell(int, int);
		void deleteCell(int, int);
		void randomCreation();
		string next();
		void get_from_file(ifstream*);
		void load_to_file(ofstream*);
		friend std::ostream &operator<<(ostream&, const Field&);
		~Field();
	};
}