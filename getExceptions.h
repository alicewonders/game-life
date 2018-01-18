#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

namespace Life {
	class exception {
	public:
		string message;
		exception();
		exception(const string& msg);
		void get_message();
	};

	class errorMessage : public exception {
	private:
		string info(const string class_name);
	public:
		errorMessage(const string class_name);
	};

	class commandError : public exception {
	public:
		string command;
		commandError();
		commandError(const string& command);
	};

	class invalidArgument : public commandError {
	private:
		string get_info(const string command);
	public:
		invalidArgument(const string& com);
	};
}