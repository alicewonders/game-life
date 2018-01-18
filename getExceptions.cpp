#include "getExceptions.h"

using namespace std;

namespace Life {

	exception::exception() : message("") {}

	exception::exception(const string &msg) : message(msg) {}

	void exception::get_message() {
		system("cls");
		cout << message.c_str();
		cout << "________________________" << endl << endl;
		cout << " Next command: ";
	}

	errorMessage::errorMessage(const string class_name) {
		message = "\n No space left on device or wrong arguments. Try again " + info(class_name);
	}

	string errorMessage::info(const string class_name) {
		string res = "";
		if (class_name == "Game") {
			res = "The length and the heigth of the game field should be >0 and <257. Try again with recommended values from 3 to 26\n\n";
		}
		return res;
	}

	commandError::commandError() {
		message = "\n Void command\n\n";
	}

	commandError::commandError(const string& command) : command(command) {
		message = "\n the command '" + command + "' is unknown or incorrect. Print 'help' to see the list of allowed commands and try again\n\n";
	}

	invalidArgument::invalidArgument(const string& com) {
		command = com;
		message = "\n Error in command '" + command + "' - invalid argument.\n " + get_info(command);
	}

	string invalidArgument::get_info(const string command) {
		string res = "";
		if (command == "step") {
			res = "Expected one positive integer number. Try again\n\n";
		}
		else if (command == "set") {
			res = "Expected LETTERNUMBER expression. Try again\n\n";
		}
		else if (command == "clear") {
			res = "Expected	LETTERNUMBER expression. Try again\n\n";
		}
		else if (command == "random_set") {
			res = "Expected one positive integer number. Try again\n\n";
		}
		else if (command == "save") {
			res = "File couldn't be saved with this name. Try again\n\n";
		}
		else if (command == "load") {
			res = "File couldn't be loaded with this name\n\n";
		}
		else if (command == "start" || command == "back" || command == "reset") {
			res = "Try this command without argruments\n\n";
		}
		return res;
	}

}