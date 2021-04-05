#include "iostream"
#include "lib/turing_machine.h"

using namespace std;

int main(int argc, char const *argv[]) {
	machine m;
    std::cin >> m.input;
	
    int in_s, out_s;
	char r, w, mv;
	while(cin >> in_s >> r >> w >> mv >> out_s)
	{
    	m.add_movement(in_s, r, w, mv, out_s);
	}

	std::cout << m.run() << std::endl;
	std::cout << m.input << std::endl;
	
    return 0;
}
