#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;
int main(int argc, char** argv)
{
	if (argc > 1) {
		cout << argv[0] << " " << argv[1];
		string app = argv[1];
		system(app.c_str()); 
	}
}