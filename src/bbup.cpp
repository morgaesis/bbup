#include <iostream>
#include <boost/program_options.hpp>

namespace po = boost::program_options;

int main() {
	system("echo \"I am $(whoami) in directory ${PWD}\"");
}
