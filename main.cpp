#include "Game.h"

//разобраться, где нужна передача по ссылке 
int main(int argc, char* argv[]){
	string str;
	Life::Game newgame(15, 15);
	while (1) {
		getline(cin, str);
		try { newgame.exec_command(str); }
		catch (Life::errorMessage& em) { 
			em.get_message(); 
		}
		catch (Life::invalidArgument& ia) {
			ia.get_message(); 
		}
		catch (Life::commandError& ce) { 
			ce.get_message(); 
		}
		catch (int){ 
			cout << "I will be glad to see you again in my The Life game!" << endl; 
			break; 
		}
		catch (Life::exception& ex) { 
			ex.get_message(); 
		}
		catch (...){ 
			cout << "Something happened" << endl; 
		}
	}
	return 0;
}